#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTLBHandler
// Address: 0x118348 - 0x1183a8
void SetTLBHandler_0x118348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTLBHandler_0x118348");
#endif

    switch (ctx->pc) {
        case 0x118378u: goto label_118378;
        case 0x118384u: goto label_118384;
        case 0x118390u: goto label_118390;
        default: break;
    }

    ctx->pc = 0x118348u;

    // 0x118348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11834c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x118350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118354: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118358: 0x3c100012  lui         $s0, 0x12
    ctx->pc = 0x118358u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)18 << 16));
    // 0x11835c: 0x26108880  addiu       $s0, $s0, -0x7780
    ctx->pc = 0x11835cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936704));
    // 0x118360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118364: 0xac511270  sw          $s1, 0x1270($v0)
    ctx->pc = 0x118364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4720), GPR_U32(ctx, 17));
    // 0x118368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11836c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118370: 0xc043f64  jal         func_10FD90
    ctx->pc = 0x118370u;
    SET_GPR_U32(ctx, 31, 0x118378u);
    ctx->pc = 0x118374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118370u;
            // 0x118374: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FD90u;
    if (runtime->hasFunction(0x10FD90u)) {
        auto targetFn = runtime->lookupFunction(0x10FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118378u; }
        if (ctx->pc != 0x118378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVTLBRefillHandler_0x10fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118378u; }
        if (ctx->pc != 0x118378u) { return; }
    }
    ctx->pc = 0x118378u;
label_118378:
    // 0x118378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11837c: 0xc043f64  jal         func_10FD90
    ctx->pc = 0x11837Cu;
    SET_GPR_U32(ctx, 31, 0x118384u);
    ctx->pc = 0x118380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11837Cu;
            // 0x118380: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FD90u;
    if (runtime->hasFunction(0x10FD90u)) {
        auto targetFn = runtime->lookupFunction(0x10FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118384u; }
        if (ctx->pc != 0x118384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVTLBRefillHandler_0x10fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118384u; }
        if (ctx->pc != 0x118384u) { return; }
    }
    ctx->pc = 0x118384u;
label_118384:
    // 0x118384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118388: 0xc043f64  jal         func_10FD90
    ctx->pc = 0x118388u;
    SET_GPR_U32(ctx, 31, 0x118390u);
    ctx->pc = 0x11838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118388u;
            // 0x11838c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FD90u;
    if (runtime->hasFunction(0x10FD90u)) {
        auto targetFn = runtime->lookupFunction(0x10FD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118390u; }
        if (ctx->pc != 0x118390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVTLBRefillHandler_0x10fd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118390u; }
        if (ctx->pc != 0x118390u) { return; }
    }
    ctx->pc = 0x118390u;
label_118390:
    // 0x118390: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x118390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118398: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11839c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11839cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1183a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1183A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1183A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1183A0u;
            // 0x1183a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1183A8u;
}
