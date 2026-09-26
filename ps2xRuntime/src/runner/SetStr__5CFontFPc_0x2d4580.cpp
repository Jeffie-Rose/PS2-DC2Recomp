#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStr__5CFontFPc
// Address: 0x2d4580 - 0x2d45e8
void SetStr__5CFontFPc_0x2d4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStr__5CFontFPc_0x2d4580");
#endif

    switch (ctx->pc) {
        case 0x2d45a4u: goto label_2d45a4;
        case 0x2d45acu: goto label_2d45ac;
        case 0x2d45c4u: goto label_2d45c4;
        case 0x2d45d4u: goto label_2d45d4;
        default: break;
    }

    ctx->pc = 0x2d4580u;

    // 0x2d4580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d4584: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2d4584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d4588: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d4588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d458c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d4594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d4594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4598: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d4598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d459c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2D459Cu;
    SET_GPR_U32(ctx, 31, 0x2D45A4u);
    ctx->pc = 0x2D45A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D459Cu;
            // 0x2d45a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D45A4u; }
        if (ctx->pc != 0x2D45A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D45A4u; }
        if (ctx->pc != 0x2D45A4u) { return; }
    }
    ctx->pc = 0x2D45A4u;
label_2d45a4:
    // 0x2d45a4: 0xc04a422  jal         func_129088
    ctx->pc = 0x2D45A4u;
    SET_GPR_U32(ctx, 31, 0x2D45ACu);
    ctx->pc = 0x2D45A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D45A4u;
            // 0x2d45a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D45ACu; }
        if (ctx->pc != 0x2D45ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D45ACu; }
        if (ctx->pc != 0x2D45ACu) { return; }
    }
    ctx->pc = 0x2D45ACu;
label_2d45ac:
    // 0x2d45ac: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x2d45acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2d45b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D45B0u;
    {
        const bool branch_taken_0x2d45b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D45B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D45B0u;
            // 0x2d45b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45b0) {
            ctx->pc = 0x2D45CCu;
            goto label_2d45cc;
        }
    }
    ctx->pc = 0x2D45B8u;
    // 0x2d45b8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d45b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d45bc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2D45BCu;
    SET_GPR_U32(ctx, 31, 0x2D45C4u);
    ctx->pc = 0x2D45C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D45BCu;
            // 0x2d45c0: 0x24840760  addiu       $a0, $a0, 0x760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D45C4u; }
        if (ctx->pc != 0x2D45C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D45C4u; }
        if (ctx->pc != 0x2D45C4u) { return; }
    }
    ctx->pc = 0x2D45C4u;
label_2d45c4:
    // 0x2d45c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D45C4u;
    {
        const bool branch_taken_0x2d45c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D45C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D45C4u;
            // 0x2d45c8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d45c4) {
            ctx->pc = 0x2D45D8u;
            goto label_2d45d8;
        }
    }
    ctx->pc = 0x2D45CCu;
label_2d45cc:
    // 0x2d45cc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2D45CCu;
    SET_GPR_U32(ctx, 31, 0x2D45D4u);
    ctx->pc = 0x2D45D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D45CCu;
            // 0x2d45d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D45D4u; }
        if (ctx->pc != 0x2D45D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D45D4u; }
        if (ctx->pc != 0x2D45D4u) { return; }
    }
    ctx->pc = 0x2D45D4u;
label_2d45d4:
    // 0x2d45d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d45d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d45d8:
    // 0x2d45d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d45d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d45dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d45dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d45e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D45E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D45E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D45E0u;
            // 0x2d45e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D45E8u;
}
