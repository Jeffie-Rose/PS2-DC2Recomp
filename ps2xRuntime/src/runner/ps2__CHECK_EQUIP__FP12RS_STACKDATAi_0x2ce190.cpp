#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_EQUIP__FP12RS_STACKDATAi
// Address: 0x2ce190 - 0x2ce210
void ps2__CHECK_EQUIP__FP12RS_STACKDATAi_0x2ce190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_EQUIP__FP12RS_STACKDATAi_0x2ce190");
#endif

    switch (ctx->pc) {
        case 0x2ce1b8u: goto label_2ce1b8;
        case 0x2ce1d0u: goto label_2ce1d0;
        case 0x2ce1f8u: goto label_2ce1f8;
        default: break;
    }

    ctx->pc = 0x2ce190u;

    // 0x2ce190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ce198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ce19c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce1a0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE1A0u;
    {
        const bool branch_taken_0x2ce1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1A0u;
            // 0x2ce1a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1a0) {
            ctx->pc = 0x2CE1B0u;
            goto label_2ce1b0;
        }
    }
    ctx->pc = 0x2CE1A8u;
    // 0x2ce1a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2CE1A8u;
    {
        const bool branch_taken_0x2ce1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1A8u;
            // 0x2ce1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce1a8) {
            ctx->pc = 0x2CE1FCu;
            goto label_2ce1fc;
        }
    }
    ctx->pc = 0x2CE1B0u;
label_2ce1b0:
    // 0x2ce1b0: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE1B0u;
    SET_GPR_U32(ctx, 31, 0x2CE1B8u);
    ctx->pc = 0x2CE1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1B0u;
            // 0x2ce1b4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1B8u; }
        if (ctx->pc != 0x2CE1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1B8u; }
        if (ctx->pc != 0x2CE1B8u) { return; }
    }
    ctx->pc = 0x2CE1B8u;
label_2ce1b8:
    // 0x2ce1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1bc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce1c0: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2ce1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce1c4: 0x8c450670  lw          $a1, 0x670($v0)
    ctx->pc = 0x2ce1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    // 0x2ce1c8: 0xc066d24  jal         func_19B490
    ctx->pc = 0x2CE1C8u;
    SET_GPR_U32(ctx, 31, 0x2CE1D0u);
    ctx->pc = 0x2CE1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1C8u;
            // 0x2ce1cc: 0x8f848da0  lw          $a0, -0x7260($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1D0u; }
        if (ctx->pc != 0x2CE1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1D0u; }
        if (ctx->pc != 0x2CE1D0u) { return; }
    }
    ctx->pc = 0x2CE1D0u;
label_2ce1d0:
    // 0x2ce1d0: 0x24450170  addiu       $a1, $v0, 0x170
    ctx->pc = 0x2ce1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2ce1d4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2ce1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ce1d8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2ce1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ce1dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ce1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce1e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ce1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce1e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ce1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ce1e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ce1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ce1ec: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x2ce1ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2ce1f0: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CE1F0u;
    SET_GPR_U32(ctx, 31, 0x2CE1F8u);
    ctx->pc = 0x2CE1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1F0u;
            // 0x2ce1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1F8u; }
        if (ctx->pc != 0x2CE1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1F8u; }
        if (ctx->pc != 0x2CE1F8u) { return; }
    }
    ctx->pc = 0x2CE1F8u;
label_2ce1f8:
    // 0x2ce1f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce1fc:
    // 0x2ce1fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ce1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce208: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE208u;
            // 0x2ce20c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE210u;
}
