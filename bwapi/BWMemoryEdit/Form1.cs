﻿using Binarysharp.MemoryManagement;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BWMemoryEdit
{
    public partial class MainWindow : Form
    {
        public MainWindow()
        {
            InitializeComponent();

            Process[] processes = Process.GetProcessesByName("StarCraft");
            if (processes.Length > 0)
            {
                MemorySharp sharp = new MemorySharp(processes[0]);
                for (int i = 0; i < 1700; ++i)
                {
                    IntPtr unitMemory = new IntPtr(0x0059CCA8 + i * 336);
                    Unit unit = new Unit(sharp[sharp.MakeRelative(unitMemory)], i);
                    offsetList.Items.Add(unit);
                }
            }
        }

        private void offsetList_SelectedIndexChanged(object sender, EventArgs e)
        {
            editorGrid.SelectedObject = offsetList.SelectedItem;
            editorGrid.ExpandItemWithInitialExpandedAttribute();
            //editorGrid.BrowsableAttributes = new AttributeCollection(new UnitTypeAttribute(UnitType.Terran_Vulture));
        }
    }
}