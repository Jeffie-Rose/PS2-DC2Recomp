#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateFuncCheck__4CMapFP15CFuncPointCheck
// Address: 0x15d730 - 0x15d76c
void CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730");
#endif

    switch (ctx->pc) {
        case 0x15d74cu: goto label_15d74c;
        default: break;
    }

    ctx->pc = 0x15d730u;

    // 0x15d730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15d734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d73c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d744: 0xc05834c  jal         func_160D30
    ctx->pc = 0x15D744u;
    SET_GPR_U32(ctx, 31, 0x15D74Cu);
    ctx->pc = 0x15D748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D744u;
            // 0x15d748: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D74Cu; }
        if (ctx->pc != 0x15D74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D74Cu; }
        if (ctx->pc != 0x15D74Cu) { return; }
    }
    ctx->pc = 0x15D74Cu;
label_15d74c:
    // 0x15d74c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x15d74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15d750: 0x8e230ce8  lw          $v1, 0xCE8($s1)
    ctx->pc = 0x15d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3304)));
    // 0x15d754: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x15d754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x15d758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d75c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d764: 0x3e00008  jr          $ra
    ctx->pc = 0x15D764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D764u;
            // 0x15d768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D76Cu;
}
