#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SjisToSerno__FUl
// Address: 0x185fd0 - 0x18602c
void SjisToSerno__FUl_0x185fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SjisToSerno__FUl_0x185fd0");
#endif

    switch (ctx->pc) {
        case 0x185fe0u: goto label_185fe0;
        default: break;
    }

    ctx->pc = 0x185fd0u;

    // 0x185fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x185fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185fd8: 0xc0617bc  jal         func_185EF0
    ctx->pc = 0x185FD8u;
    SET_GPR_U32(ctx, 31, 0x185FE0u);
    ctx->pc = 0x185EF0u;
    if (runtime->hasFunction(0x185EF0u)) {
        auto targetFn = runtime->lookupFunction(0x185EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FE0u; }
        if (ctx->pc != 0x185FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SjisToJis__FUl_0x185ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185FE0u; }
        if (ctx->pc != 0x185FE0u) { return; }
    }
    ctx->pc = 0x185FE0u;
label_185fe0:
    // 0x185fe0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x185fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185fe4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x185fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x185fe8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x185fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x185fec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x185fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x185ff0: 0x3464ffdf  ori         $a0, $v1, 0xFFDF
    ctx->pc = 0x185ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x185ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185ff8: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x185ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x185ffc: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x185ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x186000: 0x65202d  daddu       $a0, $v1, $a1
    ctx->pc = 0x186000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x186004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186008: 0x41878  dsll        $v1, $a0, 1
    ctx->pc = 0x186008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 1);
    // 0x18600c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x18600cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x186010: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x186010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x186014: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x186014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x186018: 0x64182f  dsubu       $v1, $v1, $a0
    ctx->pc = 0x186018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x18601c: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x18601cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x186020: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x186020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x186024: 0x3e00008  jr          $ra
    ctx->pc = 0x186024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186024u;
            // 0x186028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18602Cu;
}
