#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitCDFile__Fv
// Address: 0x148f70 - 0x1490c4
void InitCDFile__Fv_0x148f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitCDFile__Fv_0x148f70");
#endif

    switch (ctx->pc) {
        case 0x148f84u: goto label_148f84;
        case 0x148f94u: goto label_148f94;
        case 0x148fa4u: goto label_148fa4;
        case 0x148facu: goto label_148fac;
        case 0x148fccu: goto label_148fcc;
        case 0x148fe4u: goto label_148fe4;
        case 0x148fecu: goto label_148fec;
        case 0x148ffcu: goto label_148ffc;
        case 0x149010u: goto label_149010;
        case 0x149024u: goto label_149024;
        case 0x14902cu: goto label_14902c;
        case 0x149054u: goto label_149054;
        case 0x149068u: goto label_149068;
        default: break;
    }

    ctx->pc = 0x148f70u;

    // 0x148f70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x148f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x148f74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x148f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x148f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148f80: 0xaf8088a0  sw          $zero, -0x7760($gp)
    ctx->pc = 0x148f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936736), GPR_U32(ctx, 0));
label_148f84:
    // 0x148f84: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x148f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x148f88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x148f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x148f8c: 0xc047e82  jal         func_11FA08
    ctx->pc = 0x148F8Cu;
    SET_GPR_U32(ctx, 31, 0x148F94u);
    ctx->pc = 0x148F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F8Cu;
            // 0x148f90: 0x24a52770  addiu       $a1, $a1, 0x2770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FA08u;
    if (runtime->hasFunction(0x11FA08u)) {
        auto targetFn = runtime->lookupFunction(0x11FA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F94u; }
        if (ctx->pc != 0x148F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSearchFile_0x11fa08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F94u; }
        if (ctx->pc != 0x148F94u) { return; }
    }
    ctx->pc = 0x148F94u;
label_148f94:
    // 0x148f94: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x148F94u;
    {
        const bool branch_taken_0x148f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148f94) {
            ctx->pc = 0x148F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148f84;
        }
    }
    ctx->pc = 0x148F9Cu;
    // 0x148f9c: 0xc047fc4  jal         func_11FF10
    ctx->pc = 0x148F9Cu;
    SET_GPR_U32(ctx, 31, 0x148FA4u);
    ctx->pc = 0x148FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F9Cu;
            // 0x148fa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FF10u;
    if (runtime->hasFunction(0x11FF10u)) {
        auto targetFn = runtime->lookupFunction(0x11FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FA4u; }
        if (ctx->pc != 0x148FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x11ff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FA4u; }
        if (ctx->pc != 0x148FA4u) { return; }
    }
    ctx->pc = 0x148FA4u;
label_148fa4:
    // 0x148fa4: 0xc048278  jal         func_1209E0
    ctx->pc = 0x148FA4u;
    SET_GPR_U32(ctx, 31, 0x148FACu);
    ctx->pc = 0x1209E0u;
    if (runtime->hasFunction(0x1209E0u)) {
        auto targetFn = runtime->lookupFunction(0x1209E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FACu; }
        if (ctx->pc != 0x148FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdGetError_0x1209e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FACu; }
        if (ctx->pc != 0x148FACu) { return; }
    }
    ctx->pc = 0x148FACu;
label_148fac:
    // 0x148fac: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x148FACu;
    {
        const bool branch_taken_0x148fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148fac) {
            ctx->pc = 0x148F84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148f84;
        }
    }
    ctx->pc = 0x148FB4u;
    // 0x148fb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x148fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148fb8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x148fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x148fbc: 0x24842780  addiu       $a0, $a0, 0x2780
    ctx->pc = 0x148fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10112));
    // 0x148fc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148fc4: 0xc0450a6  jal         func_114298
    ctx->pc = 0x148FC4u;
    SET_GPR_U32(ctx, 31, 0x148FCCu);
    ctx->pc = 0x148FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FC4u;
            // 0x148fc8: 0xaf8288a4  sw          $v0, -0x775C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FCCu; }
        if (ctx->pc != 0x148FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FCCu; }
        if (ctx->pc != 0x148FCCu) { return; }
    }
    ctx->pc = 0x148FCCu;
label_148fcc:
    // 0x148fcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fd0: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x148FD0u;
    {
        const bool branch_taken_0x148fd0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x148FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148FD0u;
            // 0x148fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148fd0) {
            ctx->pc = 0x148FF0u;
            goto label_148ff0;
        }
    }
    ctx->pc = 0x148FD8u;
    // 0x148fd8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x148fdc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x148FDCu;
    SET_GPR_U32(ctx, 31, 0x148FE4u);
    ctx->pc = 0x148FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FDCu;
            // 0x148fe0: 0x248427a0  addiu       $a0, $a0, 0x27A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FE4u; }
        if (ctx->pc != 0x148FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FE4u; }
        if (ctx->pc != 0x148FE4u) { return; }
    }
    ctx->pc = 0x148FE4u;
label_148fe4:
    // 0x148fe4: 0xc0463ec  jal         func_118FB0
    ctx->pc = 0x148FE4u;
    SET_GPR_U32(ctx, 31, 0x148FECu);
    ctx->pc = 0x148FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FE4u;
            // 0x148fe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118FB0u;
    if (runtime->hasFunction(0x118FB0u)) {
        auto targetFn = runtime->lookupFunction(0x118FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FECu; }
        if (ctx->pc != 0x148FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x118fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FECu; }
        if (ctx->pc != 0x148FECu) { return; }
    }
    ctx->pc = 0x148FECu;
label_148fec:
    // 0x148fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_148ff0:
    // 0x148ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ff4: 0xc0451a8  jal         func_1146A0
    ctx->pc = 0x148FF4u;
    SET_GPR_U32(ctx, 31, 0x148FFCu);
    ctx->pc = 0x148FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FF4u;
            // 0x148ff8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FFCu; }
        if (ctx->pc != 0x148FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FFCu; }
        if (ctx->pc != 0x148FFCu) { return; }
    }
    ctx->pc = 0x148FFCu;
label_148ffc:
    // 0x148ffc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x148ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149008: 0xc0451a8  jal         func_1146A0
    ctx->pc = 0x149008u;
    SET_GPR_U32(ctx, 31, 0x149010u);
    ctx->pc = 0x14900Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149008u;
            // 0x14900c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149010u; }
        if (ctx->pc != 0x149010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149010u; }
        if (ctx->pc != 0x149010u) { return; }
    }
    ctx->pc = 0x149010u;
label_149010:
    // 0x149010: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x149010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x149014: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x149014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149018: 0x24a52680  addiu       $a1, $a1, 0x2680
    ctx->pc = 0x149018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9856));
    // 0x14901c: 0xc045236  jal         func_1148D8
    ctx->pc = 0x14901Cu;
    SET_GPR_U32(ctx, 31, 0x149024u);
    ctx->pc = 0x149020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14901Cu;
            // 0x149020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1148D8u;
    if (runtime->hasFunction(0x1148D8u)) {
        auto targetFn = runtime->lookupFunction(0x1148D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149024u; }
        if (ctx->pc != 0x149024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1148d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149024u; }
        if (ctx->pc != 0x149024u) { return; }
    }
    ctx->pc = 0x149024u;
label_149024:
    // 0x149024: 0xc045148  jal         func_114520
    ctx->pc = 0x149024u;
    SET_GPR_U32(ctx, 31, 0x14902Cu);
    ctx->pc = 0x149028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149024u;
            // 0x149028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14902Cu; }
        if (ctx->pc != 0x14902Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14902Cu; }
        if (ctx->pc != 0x14902Cu) { return; }
    }
    ctx->pc = 0x14902Cu;
label_14902c:
    // 0x14902c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x14902cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x149030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x149030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149034: 0x24c62680  addiu       $a2, $a2, 0x2680
    ctx->pc = 0x149034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9856));
    // 0x149038: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x149038u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14903c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149040: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x149040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x149044: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x149044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x149048: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x149048u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x14904c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14904Cu;
    {
        const bool branch_taken_0x14904c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14904Cu;
            // 0x149050: 0xaf83889c  sw          $v1, -0x7764($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14904c) {
            ctx->pc = 0x14909Cu;
            goto label_14909c;
        }
    }
    ctx->pc = 0x149054u;
label_149054:
    // 0x149054: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x149054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x149058: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x149058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14905c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x14905cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x149060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x149060u;
    {
        const bool branch_taken_0x149060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149060u;
            // 0x149064: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149060) {
            ctx->pc = 0x149084u;
            goto label_149084;
        }
    }
    ctx->pc = 0x149068u;
label_149068:
    // 0x149068: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x149068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x14906c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x14906cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x149070: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x149070u;
    {
        const bool branch_taken_0x149070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x149070) {
            ctx->pc = 0x14907Cu;
            goto label_14907c;
        }
    }
    ctx->pc = 0x149078u;
    // 0x149078: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x149078u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
label_14907c:
    // 0x14907c: 0x0  nop
    ctx->pc = 0x14907cu;
    // NOP
    // 0x149080: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x149080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_149084:
    // 0x149084: 0x0  nop
    ctx->pc = 0x149084u;
    // NOP
    // 0x149088: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x149088u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14908c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x14908Cu;
    {
        const bool branch_taken_0x14908c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14908c) {
            ctx->pc = 0x149068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149068;
        }
    }
    ctx->pc = 0x149094u;
    // 0x149094: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x149094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x149098: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x149098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_14909c:
    // 0x14909c: 0x0  nop
    ctx->pc = 0x14909cu;
    // NOP
    // 0x1490a0: 0x8f83889c  lw          $v1, -0x7764($gp)
    ctx->pc = 0x1490a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936732)));
    // 0x1490a4: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1490a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1490a8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1490A8u;
    {
        const bool branch_taken_0x1490a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1490ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1490A8u;
            // 0x1490ac: 0xc94021  addu        $t0, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1490a8) {
            ctx->pc = 0x149054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149054;
        }
    }
    ctx->pc = 0x1490B0u;
    // 0x1490b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1490b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1490b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1490b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1490b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1490b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1490bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1490BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1490BCu;
            // 0x1490c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1490C4u;
}
