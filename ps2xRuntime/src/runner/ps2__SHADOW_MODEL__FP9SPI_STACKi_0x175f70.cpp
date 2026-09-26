#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SHADOW_MODEL__FP9SPI_STACKi
// Address: 0x175f70 - 0x17616c
void ps2__SHADOW_MODEL__FP9SPI_STACKi_0x175f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SHADOW_MODEL__FP9SPI_STACKi_0x175f70");
#endif

    switch (ctx->pc) {
        case 0x175fb4u: goto label_175fb4;
        case 0x175fc8u: goto label_175fc8;
        case 0x175fdcu: goto label_175fdc;
        case 0x175ff8u: goto label_175ff8;
        case 0x176014u: goto label_176014;
        case 0x176048u: goto label_176048;
        case 0x176054u: goto label_176054;
        case 0x176078u: goto label_176078;
        case 0x176084u: goto label_176084;
        case 0x1760b4u: goto label_1760b4;
        case 0x1760e4u: goto label_1760e4;
        default: break;
    }

    ctx->pc = 0x175f70u;

    // 0x175f70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x175f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x175f74: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x175f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x175f78: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x175f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x175f7c: 0x24424de0  addiu       $v0, $v0, 0x4DE0
    ctx->pc = 0x175f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19936));
    // 0x175f80: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x175f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x175f84: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x175f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x175f88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x175f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x175f8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x175f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x175f90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x175f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x175f94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x175f98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x175f9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175fa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175fa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175fa8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x175fa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175fac: 0xc05191c  jal         func_146470
    ctx->pc = 0x175FACu;
    SET_GPR_U32(ctx, 31, 0x175FB4u);
    ctx->pc = 0x175FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FACu;
            // 0x175fb0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FB4u; }
        if (ctx->pc != 0x175FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FB4u; }
        if (ctx->pc != 0x175FB4u) { return; }
    }
    ctx->pc = 0x175FB4u;
label_175fb4:
    // 0x175fb4: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x175fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x175fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fc0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x175FC0u;
    SET_GPR_U32(ctx, 31, 0x175FC8u);
    ctx->pc = 0x175FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FC0u;
            // 0x175fc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FC8u; }
        if (ctx->pc != 0x175FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FC8u; }
        if (ctx->pc != 0x175FC8u) { return; }
    }
    ctx->pc = 0x175FC8u;
label_175fc8:
    // 0x175fc8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175FC8u;
    {
        const bool branch_taken_0x175fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175FC8u;
            // 0x175fcc: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fc8) {
            ctx->pc = 0x175FE4u;
            goto label_175fe4;
        }
    }
    ctx->pc = 0x175FD0u;
    // 0x175fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fd4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x175FD4u;
    SET_GPR_U32(ctx, 31, 0x175FDCu);
    ctx->pc = 0x175FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FD4u;
            // 0x175fd8: 0x24843960  addiu       $a0, $a0, 0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FDCu; }
        if (ctx->pc != 0x175FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FDCu; }
        if (ctx->pc != 0x175FDCu) { return; }
    }
    ctx->pc = 0x175FDCu;
label_175fdc:
    // 0x175fdc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x175FDCu;
    {
        const bool branch_taken_0x175fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175FDCu;
            // 0x175fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fdc) {
            ctx->pc = 0x17613Cu;
            goto label_17613c;
        }
    }
    ctx->pc = 0x175FE4u;
label_175fe4:
    // 0x175fe4: 0x8f8589dc  lw          $a1, -0x7624($gp)
    ctx->pc = 0x175fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x175fe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fec: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x175fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x175ff0: 0xc04cb78  jal         func_132DE0
    ctx->pc = 0x175FF0u;
    SET_GPR_U32(ctx, 31, 0x175FF8u);
    ctx->pc = 0x175FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FF0u;
            // 0x175ff4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FF8u; }
        if (ctx->pc != 0x175FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FF8u; }
        if (ctx->pc != 0x175FF8u) { return; }
    }
    ctx->pc = 0x175FF8u;
label_175ff8:
    // 0x175ff8: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x175ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175ffc: 0xac6202c0  sw          $v0, 0x2C0($v1)
    ctx->pc = 0x175ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 704), GPR_U32(ctx, 2));
    // 0x176000: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x176000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176004: 0x8c530070  lw          $s3, 0x70($v0)
    ctx->pc = 0x176004u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x176008: 0x2450035c  addiu       $s0, $v0, 0x35C
    ctx->pc = 0x176008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 860));
    // 0x17600c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x17600Cu;
    {
        const bool branch_taken_0x17600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17600Cu;
            // 0x176010: 0x8c4202c0  lw          $v0, 0x2C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17600c) {
            ctx->pc = 0x176128u;
            goto label_176128;
        }
    }
    ctx->pc = 0x176014u;
label_176014:
    // 0x176014: 0x8c540064  lw          $s4, 0x64($v0)
    ctx->pc = 0x176014u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x176018: 0x8e7e0068  lw          $fp, 0x68($s3)
    ctx->pc = 0x176018u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x17601c: 0x12800046  beqz        $s4, . + 4 + (0x46 << 2)
    ctx->pc = 0x17601Cu;
    {
        const bool branch_taken_0x17601c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x176020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17601Cu;
            // 0x176020: 0x8c570068  lw          $s7, 0x68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17601c) {
            ctx->pc = 0x176138u;
            goto label_176138;
        }
    }
    ctx->pc = 0x176024u;
    // 0x176024: 0x148880  sll         $s1, $s4, 2
    ctx->pc = 0x176024u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x176028: 0x3232000f  andi        $s2, $s1, 0xF
    ctx->pc = 0x176028u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x17602c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17602Cu;
    {
        const bool branch_taken_0x17602c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x176030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17602Cu;
            // 0x176030: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17602c) {
            ctx->pc = 0x17603Cu;
            goto label_17603c;
        }
    }
    ctx->pc = 0x176034u;
    // 0x176034: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x176034u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x176038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17603c:
    // 0x17603c: 0x8f8489dc  lw          $a0, -0x7624($gp)
    ctx->pc = 0x17603cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x176040: 0xc04e748  jal         func_139D20
    ctx->pc = 0x176040u;
    SET_GPR_U32(ctx, 31, 0x176048u);
    ctx->pc = 0x176044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176040u;
            // 0x176044: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176048u; }
        if (ctx->pc != 0x176048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176048u; }
        if (ctx->pc != 0x176048u) { return; }
    }
    ctx->pc = 0x176048u;
label_176048:
    // 0x176048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17604c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17604Cu;
    SET_GPR_U32(ctx, 31, 0x176054u);
    ctx->pc = 0x176050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17604Cu;
            // 0x176050: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176054u; }
        if (ctx->pc != 0x176054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176054u; }
        if (ctx->pc != 0x176054u) { return; }
    }
    ctx->pc = 0x176054u;
label_176054:
    // 0x176054: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x176054u;
    {
        const bool branch_taken_0x176054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x176058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176054u;
            // 0x176058: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176054) {
            ctx->pc = 0x176068u;
            goto label_176068;
        }
    }
    ctx->pc = 0x17605Cu;
    // 0x17605c: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x17605cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x176060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176060u;
    {
        const bool branch_taken_0x176060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176060u;
            // 0x176064: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176060) {
            ctx->pc = 0x17606Cu;
            goto label_17606c;
        }
    }
    ctx->pc = 0x176068u;
label_176068:
    // 0x176068: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x176068u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
label_17606c:
    // 0x17606c: 0x8f8489dc  lw          $a0, -0x7624($gp)
    ctx->pc = 0x17606cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x176070: 0xc04e748  jal         func_139D20
    ctx->pc = 0x176070u;
    SET_GPR_U32(ctx, 31, 0x176078u);
    ctx->pc = 0x176074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176070u;
            // 0x176074: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176078u; }
        if (ctx->pc != 0x176078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176078u; }
        if (ctx->pc != 0x176078u) { return; }
    }
    ctx->pc = 0x176078u;
label_176078:
    // 0x176078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17607c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17607Cu;
    SET_GPR_U32(ctx, 31, 0x176084u);
    ctx->pc = 0x176080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17607Cu;
            // 0x176080: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176084u; }
        if (ctx->pc != 0x176084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176084u; }
        if (ctx->pc != 0x176084u) { return; }
    }
    ctx->pc = 0x176084u;
label_176084:
    // 0x176084: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x176084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x176088: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x176088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17608c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17608Cu;
    {
        const bool branch_taken_0x17608c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17608Cu;
            // 0x176090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17608c) {
            ctx->pc = 0x17613Cu;
            goto label_17613c;
        }
    }
    ctx->pc = 0x176094u;
    // 0x176094: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x176094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x176098: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x176098u;
    {
        const bool branch_taken_0x176098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176098u;
            // 0x17609c: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176098) {
            ctx->pc = 0x176138u;
            goto label_176138;
        }
    }
    ctx->pc = 0x1760A0u;
    // 0x1760a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1760a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760a4: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1760A4u;
    {
        const bool branch_taken_0x1760a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1760A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1760A4u;
            // 0x1760a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760a4) {
            ctx->pc = 0x176120u;
            goto label_176120;
        }
    }
    ctx->pc = 0x1760ACu;
    // 0x1760ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1760acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1760b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1760b4:
    // 0x1760b4: 0x2f51021  addu        $v0, $s7, $s5
    ctx->pc = 0x1760b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x1760b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1760b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1760bc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1760BCu;
    {
        const bool branch_taken_0x1760bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1760C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1760BCu;
            // 0x1760c0: 0x3d51021  addu        $v0, $fp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760bc) {
            ctx->pc = 0x17610Cu;
            goto label_17610c;
        }
    }
    ctx->pc = 0x1760C4u;
    // 0x1760c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1760c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1760c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1760C8u;
    {
        const bool branch_taken_0x1760c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1760c8) {
            ctx->pc = 0x17610Cu;
            goto label_17610c;
        }
    }
    ctx->pc = 0x1760D0u;
    // 0x1760d0: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x1760d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1760d4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1760D4u;
    {
        const bool branch_taken_0x1760d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1760D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1760D4u;
            // 0x1760d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760d4) {
            ctx->pc = 0x17610Cu;
            goto label_17610c;
        }
    }
    ctx->pc = 0x1760DCu;
    // 0x1760dc: 0xc04ddd4  jal         func_137750
    ctx->pc = 0x1760DCu;
    SET_GPR_U32(ctx, 31, 0x1760E4u);
    ctx->pc = 0x137750u;
    if (runtime->hasFunction(0x137750u)) {
        auto targetFn = runtime->lookupFunction(0x137750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760E4u; }
        if (ctx->pc != 0x1760E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrameID__8mgCFrameFPc_0x137750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760E4u; }
        if (ctx->pc != 0x1760E4u) { return; }
    }
    ctx->pc = 0x1760E4u;
label_1760e4:
    // 0x1760e4: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1760E4u;
    {
        const bool branch_taken_0x1760e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1760e4) {
            ctx->pc = 0x17610Cu;
            goto label_17610c;
        }
    }
    ctx->pc = 0x1760ECu;
    // 0x1760ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1760ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1760f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1760f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1760f4: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x1760f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x1760f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1760f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1760fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1760fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x176100: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x176100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x176104: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x176104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x176108: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x176108u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_17610c:
    // 0x17610c: 0x0  nop
    ctx->pc = 0x17610cu;
    // NOP
    // 0x176110: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x176110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x176114: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x176114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x176118: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x176118u;
    {
        const bool branch_taken_0x176118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176118u;
            // 0x17611c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176118) {
            ctx->pc = 0x1760B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1760b4;
        }
    }
    ctx->pc = 0x176120u;
label_176120:
    // 0x176120: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x176120u;
    {
        const bool branch_taken_0x176120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176120u;
            // 0x176124: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176120) {
            ctx->pc = 0x176138u;
            goto label_176138;
        }
    }
    ctx->pc = 0x176128u;
label_176128:
    // 0x176128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176128u;
    {
        const bool branch_taken_0x176128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176128) {
            ctx->pc = 0x176138u;
            goto label_176138;
        }
    }
    ctx->pc = 0x176130u;
    // 0x176130: 0x1660ffb8  bnez        $s3, . + 4 + (-0x48 << 2)
    ctx->pc = 0x176130u;
    {
        const bool branch_taken_0x176130 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x176130) {
            ctx->pc = 0x176014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176014;
        }
    }
    ctx->pc = 0x176138u;
label_176138:
    // 0x176138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17613c:
    // 0x17613c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17613cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x176140: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x176140u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176144: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x176144u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x176148: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x176148u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17614c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17614cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176150: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x176150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176154: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17615c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17615cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176164: 0x3e00008  jr          $ra
    ctx->pc = 0x176164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176164u;
            // 0x176168: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17616Cu;
}
