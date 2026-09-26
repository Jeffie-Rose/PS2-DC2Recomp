#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadData__16CGyoraceFishDataFP9mgCMemoryP1
// Address: 0x219b80 - 0x219c54
void LoadData__16CGyoraceFishDataFP9mgCMemoryP1_0x219b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadData__16CGyoraceFishDataFP9mgCMemoryP1_0x219b80");
#endif

    switch (ctx->pc) {
        case 0x219bccu: goto label_219bcc;
        case 0x219bd4u: goto label_219bd4;
        case 0x219be8u: goto label_219be8;
        case 0x219bfcu: goto label_219bfc;
        case 0x219c0cu: goto label_219c0c;
        case 0x219c1cu: goto label_219c1c;
        case 0x219c2cu: goto label_219c2c;
        case 0x219c34u: goto label_219c34;
        case 0x219c40u: goto label_219c40;
        default: break;
    }

    ctx->pc = 0x219b80u;

    // 0x219b80: 0x27bdf040  addiu       $sp, $sp, -0xFC0
    ctx->pc = 0x219b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963264));
    // 0x219b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219b8c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x219B8Cu;
    {
        const bool branch_taken_0x219b8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x219B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219B8Cu;
            // 0x219b90: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b8c) {
            ctx->pc = 0x219B9Cu;
            goto label_219b9c;
        }
    }
    ctx->pc = 0x219B94u;
    // 0x219b94: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x219B94u;
    {
        const bool branch_taken_0x219b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219B94u;
            // 0x219b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b94) {
            ctx->pc = 0x219C44u;
            goto label_219c44;
        }
    }
    ctx->pc = 0x219B9Cu;
label_219b9c:
    // 0x219b9c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x219b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x219ba0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x219ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x219ba4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x219ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x219ba8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x219ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x219bac: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x219bacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x219bb0: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x219bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x219bb4: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x219bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x219bb8: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x219bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x219bbc: 0xaf849260  sw          $a0, -0x6DA0($gp)
    ctx->pc = 0x219bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939232), GPR_U32(ctx, 4));
    // 0x219bc0: 0xaf85925c  sw          $a1, -0x6DA4($gp)
    ctx->pc = 0x219bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939228), GPR_U32(ctx, 5));
    // 0x219bc4: 0xc0521f0  jal         func_1487C0
    ctx->pc = 0x219BC4u;
    SET_GPR_U32(ctx, 31, 0x219BCCu);
    ctx->pc = 0x219BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219BC4u;
            // 0x219bc8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1487C0u;
    if (runtime->hasFunction(0x1487C0u)) {
        auto targetFn = runtime->lookupFunction(0x1487C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BCCu; }
        if (ctx->pc != 0x219BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCurrentDir__FPc_0x1487c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BCCu; }
        if (ctx->pc != 0x219BCCu) { return; }
    }
    ctx->pc = 0x219BCCu;
label_219bcc:
    // 0x219bcc: 0xc0521d8  jal         func_148760
    ctx->pc = 0x219BCCu;
    SET_GPR_U32(ctx, 31, 0x219BD4u);
    ctx->pc = 0x219BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219BCCu;
            // 0x219bd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BD4u; }
        if (ctx->pc != 0x219BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BD4u; }
        if (ctx->pc != 0x219BD4u) { return; }
    }
    ctx->pc = 0x219BD4u;
label_219bd4:
    // 0x219bd4: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x219bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x219bd8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x219bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x219bdc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x219bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x219be0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x219BE0u;
    SET_GPR_U32(ctx, 31, 0x219BE8u);
    ctx->pc = 0x219BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219BE0u;
            // 0x219be4: 0x24a5a340  addiu       $a1, $a1, -0x5CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BE8u; }
        if (ctx->pc != 0x219BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BE8u; }
        if (ctx->pc != 0x219BE8u) { return; }
    }
    ctx->pc = 0x219BE8u;
label_219be8:
    // 0x219be8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x219be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x219bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219bf0: 0x27a60fbc  addiu       $a2, $sp, 0xFBC
    ctx->pc = 0x219bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4028));
    // 0x219bf4: 0xc0524dc  jal         func_149370
    ctx->pc = 0x219BF4u;
    SET_GPR_U32(ctx, 31, 0x219BFCu);
    ctx->pc = 0x219BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219BF4u;
            // 0x219bf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BFCu; }
        if (ctx->pc != 0x219BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BFCu; }
        if (ctx->pc != 0x219BFCu) { return; }
    }
    ctx->pc = 0x219BFCu;
label_219bfc:
    // 0x219bfc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x219BFCu;
    {
        const bool branch_taken_0x219bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219BFCu;
            // 0x219c00: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bfc) {
            ctx->pc = 0x219C38u;
            goto label_219c38;
        }
    }
    ctx->pc = 0x219C04u;
    // 0x219c04: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x219C04u;
    SET_GPR_U32(ctx, 31, 0x219C0Cu);
    ctx->pc = 0x219C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219C04u;
            // 0x219c08: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C0Cu; }
        if (ctx->pc != 0x219C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C0Cu; }
        if (ctx->pc != 0x219C0Cu) { return; }
    }
    ctx->pc = 0x219C0Cu;
label_219c0c:
    // 0x219c0c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x219c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x219c10: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x219c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x219c14: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x219C14u;
    SET_GPR_U32(ctx, 31, 0x219C1Cu);
    ctx->pc = 0x219C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219C14u;
            // 0x219c18: 0x24a5fe60  addiu       $a1, $a1, -0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C1Cu; }
        if (ctx->pc != 0x219C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C1Cu; }
        if (ctx->pc != 0x219C1Cu) { return; }
    }
    ctx->pc = 0x219C1Cu;
label_219c1c:
    // 0x219c1c: 0x8fa60fbc  lw          $a2, 0xFBC($sp)
    ctx->pc = 0x219c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4028)));
    // 0x219c20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c24: 0xc051a60  jal         func_146980
    ctx->pc = 0x219C24u;
    SET_GPR_U32(ctx, 31, 0x219C2Cu);
    ctx->pc = 0x219C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219C24u;
            // 0x219c28: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C2Cu; }
        if (ctx->pc != 0x219C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C2Cu; }
        if (ctx->pc != 0x219C2Cu) { return; }
    }
    ctx->pc = 0x219C2Cu;
label_219c2c:
    // 0x219c2c: 0xc0519c8  jal         func_146720
    ctx->pc = 0x219C2Cu;
    SET_GPR_U32(ctx, 31, 0x219C34u);
    ctx->pc = 0x219C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219C2Cu;
            // 0x219c30: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C34u; }
        if (ctx->pc != 0x219C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C34u; }
        if (ctx->pc != 0x219C34u) { return; }
    }
    ctx->pc = 0x219C34u;
label_219c34:
    // 0x219c34: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x219c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_219c38:
    // 0x219c38: 0xc0521d8  jal         func_148760
    ctx->pc = 0x219C38u;
    SET_GPR_U32(ctx, 31, 0x219C40u);
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C40u; }
        if (ctx->pc != 0x219C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C40u; }
        if (ctx->pc != 0x219C40u) { return; }
    }
    ctx->pc = 0x219C40u;
label_219c40:
    // 0x219c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219c44:
    // 0x219c44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219c48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x219C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C4Cu;
            // 0x219c50: 0x27bd0fc0  addiu       $sp, $sp, 0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219C54u;
}
