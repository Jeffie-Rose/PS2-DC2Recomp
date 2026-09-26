#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Check__10CFuncPointFP15CFuncPointCheck
// Address: 0x29c6c0 - 0x29c708
void Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0");
#endif

    switch (ctx->pc) {
        case 0x29c6f4u: goto label_29c6f4;
        default: break;
    }

    ctx->pc = 0x29c6c0u;

    // 0x29c6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c6c8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x29c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29c6cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C6CCu;
    {
        const bool branch_taken_0x29c6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6CCu;
            // 0x29c6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6cc) {
            ctx->pc = 0x29C6DCu;
            goto label_29c6dc;
        }
    }
    ctx->pc = 0x29C6D4u;
    // 0x29c6d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29C6D4u;
    {
        const bool branch_taken_0x29c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6D4u;
            // 0x29c6d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6d4) {
            ctx->pc = 0x29C700u;
            goto label_29c700;
        }
    }
    ctx->pc = 0x29C6DCu;
label_29c6dc:
    // 0x29c6dc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29C6DCu;
    {
        const bool branch_taken_0x29c6dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6DCu;
            // 0x29c6e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6dc) {
            ctx->pc = 0x29C6FCu;
            goto label_29c6fc;
        }
    }
    ctx->pc = 0x29C6E4u;
    // 0x29c6e4: 0xc48d0014  lwc1        $f13, 0x14($a0)
    ctx->pc = 0x29c6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29c6e8: 0xc48e0018  lwc1        $f14, 0x18($a0)
    ctx->pc = 0x29c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29c6ec: 0xc0a7124  jal         func_29C490
    ctx->pc = 0x29C6ECu;
    SET_GPR_U32(ctx, 31, 0x29C6F4u);
    ctx->pc = 0x29C6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6ECu;
            // 0x29c6f0: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C490u;
    if (runtime->hasFunction(0x29C490u)) {
        auto targetFn = runtime->lookupFunction(0x29C490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6F4u; }
        if (ctx->pc != 0x29C6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTime__Ffff_0x29c490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6F4u; }
        if (ctx->pc != 0x29C6F4u) { return; }
    }
    ctx->pc = 0x29C6F4u;
label_29c6f4:
    // 0x29c6f4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x29C6F4u;
    {
        const bool branch_taken_0x29c6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c6f4) {
            ctx->pc = 0x29C6FCu;
            goto label_29c6fc;
        }
    }
    ctx->pc = 0x29C6FCu;
label_29c6fc:
    // 0x29c6fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c700:
    // 0x29c700: 0x3e00008  jr          $ra
    ctx->pc = 0x29C700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C700u;
            // 0x29c704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C708u;
}
