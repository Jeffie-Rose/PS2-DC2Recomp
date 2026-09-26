#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatTresuarBoxInfo__FP22TRESURE_BOX_FLOOR_INFOPci
// Address: 0x28dee0 - 0x28df90
void CreatTresuarBoxInfo__FP22TRESURE_BOX_FLOOR_INFOPci_0x28dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatTresuarBoxInfo__FP22TRESURE_BOX_FLOOR_INFOPci_0x28dee0");
#endif

    switch (ctx->pc) {
        case 0x28df34u: goto label_28df34;
        case 0x28df44u: goto label_28df44;
        case 0x28df54u: goto label_28df54;
        case 0x28df5cu: goto label_28df5c;
        default: break;
    }

    ctx->pc = 0x28dee0u;

    // 0x28dee0: 0x27bdf0f0  addiu       $sp, $sp, -0xF10
    ctx->pc = 0x28dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963440));
    // 0x28dee4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x28dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x28dee8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28deec: 0x34632204  ori         $v1, $v1, 0x2204
    ctx->pc = 0x28deecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8708);
    // 0x28def0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28def0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28def4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x28def4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x28def8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28def8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28defc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28defcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28df00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28df00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28df04: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x28df04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x28df08: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28df08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x28df0c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x28df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28df10: 0xac20a408  sw          $zero, -0x5BF8($at)
    ctx->pc = 0x28df10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943752), GPR_U32(ctx, 0));
    // 0x28df14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28df14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df18: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x28df18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x28df1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28df1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df20: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x28df20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x28df24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28df24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df28: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28df2c: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x28DF2Cu;
    SET_GPR_U32(ctx, 31, 0x28DF34u);
    ctx->pc = 0x28DF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF2Cu;
            // 0x28df30: 0xaf92982c  sw          $s2, -0x67D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940716), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF34u; }
        if (ctx->pc != 0x28DF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF34u; }
        if (ctx->pc != 0x28DF34u) { return; }
    }
    ctx->pc = 0x28DF34u;
label_28df34:
    // 0x28df34: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x28df34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x28df38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x28df38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28df3c: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x28DF3Cu;
    SET_GPR_U32(ctx, 31, 0x28DF44u);
    ctx->pc = 0x28DF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF3Cu;
            // 0x28df40: 0x24a53f90  addiu       $a1, $a1, 0x3F90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF44u; }
        if (ctx->pc != 0x28DF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF44u; }
        if (ctx->pc != 0x28DF44u) { return; }
    }
    ctx->pc = 0x28DF44u;
label_28df44:
    // 0x28df44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28df44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28df48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df4c: 0xc051a60  jal         func_146980
    ctx->pc = 0x28DF4Cu;
    SET_GPR_U32(ctx, 31, 0x28DF54u);
    ctx->pc = 0x28DF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF4Cu;
            // 0x28df50: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF54u; }
        if (ctx->pc != 0x28DF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF54u; }
        if (ctx->pc != 0x28DF54u) { return; }
    }
    ctx->pc = 0x28DF54u;
label_28df54:
    // 0x28df54: 0xc0519c8  jal         func_146720
    ctx->pc = 0x28DF54u;
    SET_GPR_U32(ctx, 31, 0x28DF5Cu);
    ctx->pc = 0x28DF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF54u;
            // 0x28df58: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF5Cu; }
        if (ctx->pc != 0x28DF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF5Cu; }
        if (ctx->pc != 0x28DF5Cu) { return; }
    }
    ctx->pc = 0x28DF5Cu;
label_28df5c:
    // 0x28df5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28df5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28df60: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x28df60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x28df64: 0x8c232204  lw          $v1, 0x2204($at)
    ctx->pc = 0x28df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8708)));
    // 0x28df68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28df68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28df6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28df70: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x28df70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x28df74: 0xac232204  sw          $v1, 0x2204($at)
    ctx->pc = 0x28df74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8708), GPR_U32(ctx, 3));
    // 0x28df78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28df78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28df7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28df7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28df80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28df80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28df84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28df84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28df88: 0x3e00008  jr          $ra
    ctx->pc = 0x28DF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF88u;
            // 0x28df8c: 0x27bd0f10  addiu       $sp, $sp, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28DF90u;
}
