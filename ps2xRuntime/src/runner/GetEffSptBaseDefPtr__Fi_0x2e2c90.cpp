#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEffSptBaseDefPtr__Fi
// Address: 0x2e2c90 - 0x2e2cf8
void GetEffSptBaseDefPtr__Fi_0x2e2c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEffSptBaseDefPtr__Fi_0x2e2c90");
#endif

    switch (ctx->pc) {
        case 0x2e2cd8u: goto label_2e2cd8;
        default: break;
    }

    ctx->pc = 0x2e2c90u;

    // 0x2e2c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e2c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e2c98: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2C98u;
    {
        const bool branch_taken_0x2e2c98 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2E2C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2C98u;
            // 0x2e2c9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c98) {
            ctx->pc = 0x2E2CA8u;
            goto label_2e2ca8;
        }
    }
    ctx->pc = 0x2E2CA0u;
    // 0x2e2ca0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E2CA0u;
    {
        const bool branch_taken_0x2e2ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2CA0u;
            // 0x2e2ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ca0) {
            ctx->pc = 0x2E2CE8u;
            goto label_2e2ce8;
        }
    }
    ctx->pc = 0x2E2CA8u;
label_2e2ca8:
    // 0x2e2ca8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e2cac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2e2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2e2cb0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e2cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2cb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2e2cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2e2cb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e2cbc: 0x244271e0  addiu       $v0, $v0, 0x71E0
    ctx->pc = 0x2e2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29152));
    // 0x2e2cc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e2cc4: 0x24a51258  addiu       $a1, $a1, 0x1258
    ctx->pc = 0x2e2cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4696));
    // 0x2e2cc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e2ccc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2e2cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2cd0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2E2CD0u;
    SET_GPR_U32(ctx, 31, 0x2E2CD8u);
    ctx->pc = 0x2E2CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2CD0u;
            // 0x2e2cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2CD8u; }
        if (ctx->pc != 0x2E2CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2CD8u; }
        if (ctx->pc != 0x2E2CD8u) { return; }
    }
    ctx->pc = 0x2E2CD8u;
label_2e2cd8:
    // 0x2e2cd8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2CD8u;
    {
        const bool branch_taken_0x2e2cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2cd8) {
            ctx->pc = 0x2E2CE4u;
            goto label_2e2ce4;
        }
    }
    ctx->pc = 0x2E2CE0u;
    // 0x2e2ce0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e2ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2ce4:
    // 0x2e2ce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e2ce8:
    // 0x2e2ce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e2ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2CF0u;
            // 0x2e2cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2CF8u;
}
