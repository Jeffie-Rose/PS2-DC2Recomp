#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: handler_endimage__Fi
// Address: 0x2998e0 - 0x299918
void handler_endimage__Fi_0x2998e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("handler_endimage__Fi_0x2998e0");
#endif

    switch (ctx->pc) {
        case 0x2998fcu: goto label_2998fc;
        default: break;
    }

    ctx->pc = 0x2998e0u;

    // 0x2998e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2998e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2998e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2998e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2998e8: 0x93829914  lbu         $v0, -0x66EC($gp)
    ctx->pc = 0x2998e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940948)));
    // 0x2998ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2998ECu;
    {
        const bool branch_taken_0x2998ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2998F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2998ECu;
            // 0x2998f0: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998ec) {
            ctx->pc = 0x299900u;
            goto label_299900;
        }
    }
    ctx->pc = 0x2998F4u;
    // 0x2998f4: 0xc0a66e4  jal         func_299B90
    ctx->pc = 0x2998F4u;
    SET_GPR_U32(ctx, 31, 0x2998FCu);
    ctx->pc = 0x2998F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2998F4u;
            // 0x2998f8: 0x24845470  addiu       $a0, $a0, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299B90u;
    if (runtime->hasFunction(0x299B90u)) {
        auto targetFn = runtime->lookupFunction(0x299B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2998FCu; }
        if (ctx->pc != 0x2998FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufDecCount__FP5VoBuf_0x299b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2998FCu; }
        if (ctx->pc != 0x2998FCu) { return; }
    }
    ctx->pc = 0x2998FCu;
label_2998fc:
    // 0x2998fc: 0xa3809914  sb          $zero, -0x66EC($gp)
    ctx->pc = 0x2998fcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940948), (uint8_t)GPR_U32(ctx, 0));
label_299900:
    // 0x299900: 0xf  sync
    ctx->pc = 0x299900u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x299904: 0x42000038  ei
    ctx->pc = 0x299904u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x299908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29990c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29990cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299910: 0x3e00008  jr          $ra
    ctx->pc = 0x299910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299910u;
            // 0x299914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299918u;
}
