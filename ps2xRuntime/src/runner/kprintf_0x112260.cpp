#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kprintf
// Address: 0x112260 - 0x112298
void kprintf_0x112260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kprintf_0x112260");
#endif

    switch (ctx->pc) {
        case 0x11228cu: goto label_11228c;
        default: break;
    }

    ctx->pc = 0x112260u;

    // 0x112260: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x112260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x112264: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x112264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x112268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11226c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x11226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x112270: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x112270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x112274: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x112274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x112278: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x112278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x11227c: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x11227cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x112280: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x112280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x112284: 0xc044726  jal         func_111C98
    ctx->pc = 0x112284u;
    SET_GPR_U32(ctx, 31, 0x11228Cu);
    ctx->pc = 0x112288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112284u;
            // 0x112288: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111C98u;
    if (runtime->hasFunction(0x111C98u)) {
        auto targetFn = runtime->lookupFunction(0x111C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11228Cu; }
        if (ctx->pc != 0x11228Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _printf_0x111c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11228Cu; }
        if (ctx->pc != 0x11228Cu) { return; }
    }
    ctx->pc = 0x11228Cu;
label_11228c:
    // 0x11228c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112290: 0x3e00008  jr          $ra
    ctx->pc = 0x112290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112290u;
            // 0x112294: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112298u;
}
