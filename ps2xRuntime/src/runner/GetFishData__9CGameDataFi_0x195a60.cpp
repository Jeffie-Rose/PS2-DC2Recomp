#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishData__9CGameDataFi
// Address: 0x195a60 - 0x195b04
void GetFishData__9CGameDataFi_0x195a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishData__9CGameDataFi_0x195a60");
#endif

    switch (ctx->pc) {
        case 0x195a78u: goto label_195a78;
        case 0x195ac4u: goto label_195ac4;
        default: break;
    }

    ctx->pc = 0x195a60u;

    // 0x195a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a70: 0xc0655dc  jal         func_195770
    ctx->pc = 0x195A70u;
    SET_GPR_U32(ctx, 31, 0x195A78u);
    ctx->pc = 0x195A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195A70u;
            // 0x195a74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A78u; }
        if (ctx->pc != 0x195A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A78u; }
        if (ctx->pc != 0x195A78u) { return; }
    }
    ctx->pc = 0x195A78u;
label_195a78:
    // 0x195a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a7c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A7Cu;
    {
        const bool branch_taken_0x195a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A7Cu;
            // 0x195a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a7c) {
            ctx->pc = 0x195A8Cu;
            goto label_195a8c;
        }
    }
    ctx->pc = 0x195A84u;
    // 0x195a84: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x195A84u;
    {
        const bool branch_taken_0x195a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A84u;
            // 0x195a88: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a84) {
            ctx->pc = 0x195AF4u;
            goto label_195af4;
        }
    }
    ctx->pc = 0x195A8Cu;
label_195a8c:
    // 0x195a8c: 0x9623002e  lhu         $v1, 0x2E($s1)
    ctx->pc = 0x195a8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x195a90: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x195a90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195a94: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x195a94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195a98: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A98u;
    {
        const bool branch_taken_0x195a98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A98u;
            // 0x195a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a98) {
            ctx->pc = 0x195AA8u;
            goto label_195aa8;
        }
    }
    ctx->pc = 0x195AA0u;
    // 0x195aa0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x195AA0u;
    {
        const bool branch_taken_0x195aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195aa0) {
            ctx->pc = 0x195AF0u;
            goto label_195af0;
        }
    }
    ctx->pc = 0x195AA8u;
label_195aa8:
    // 0x195aa8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x195aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x195aac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195AACu;
    {
        const bool branch_taken_0x195aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195AACu;
            // 0x195ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195aac) {
            ctx->pc = 0x195ABCu;
            goto label_195abc;
        }
    }
    ctx->pc = 0x195AB4u;
    // 0x195ab4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x195AB4u;
    {
        const bool branch_taken_0x195ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ab4) {
            ctx->pc = 0x195AF0u;
            goto label_195af0;
        }
    }
    ctx->pc = 0x195ABCu;
label_195abc:
    // 0x195abc: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x195ABCu;
    SET_GPR_U32(ctx, 31, 0x195AC4u);
    ctx->pc = 0x195AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195ABCu;
            // 0x195ac0: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195AC4u; }
        if (ctx->pc != 0x195AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195AC4u; }
        if (ctx->pc != 0x195AC4u) { return; }
    }
    ctx->pc = 0x195AC4u;
label_195ac4:
    // 0x195ac4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x195ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x195ac8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195AC8u;
    {
        const bool branch_taken_0x195ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x195ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195AC8u;
            // 0x195acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ac8) {
            ctx->pc = 0x195AD8u;
            goto label_195ad8;
        }
    }
    ctx->pc = 0x195AD0u;
    // 0x195ad0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195AD0u;
    {
        const bool branch_taken_0x195ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ad0) {
            ctx->pc = 0x195AF0u;
            goto label_195af0;
        }
    }
    ctx->pc = 0x195AD8u;
label_195ad8:
    // 0x195ad8: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x195ad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195adc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x195adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x195ae0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x195ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x195ae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195ae8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_195af0:
    // 0x195af0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195af4:
    // 0x195af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195afc: 0x3e00008  jr          $ra
    ctx->pc = 0x195AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195AFCu;
            // 0x195b00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195B04u;
}
