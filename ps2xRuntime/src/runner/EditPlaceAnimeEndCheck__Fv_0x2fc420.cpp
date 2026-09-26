#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditPlaceAnimeEndCheck__Fv
// Address: 0x2fc420 - 0x2fc46c
void EditPlaceAnimeEndCheck__Fv_0x2fc420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditPlaceAnimeEndCheck__Fv_0x2fc420");
#endif

    switch (ctx->pc) {
        case 0x2fc430u: goto label_2fc430;
        case 0x2fc444u: goto label_2fc444;
        case 0x2fc454u: goto label_2fc454;
        default: break;
    }

    ctx->pc = 0x2fc420u;

    // 0x2fc420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc428: 0xc0bf0f4  jal         func_2FC3D0
    ctx->pc = 0x2FC428u;
    SET_GPR_U32(ctx, 31, 0x2FC430u);
    ctx->pc = 0x2FC3D0u;
    if (runtime->hasFunction(0x2FC3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC430u; }
        if (ctx->pc != 0x2FC430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditGetPlaceAnimeState__Fv_0x2fc3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC430u; }
        if (ctx->pc != 0x2FC430u) { return; }
    }
    ctx->pc = 0x2FC430u;
label_2fc430:
    // 0x2fc430: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fc430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fc434: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC434u;
    {
        const bool branch_taken_0x2fc434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc434) {
            ctx->pc = 0x2FC44Cu;
            goto label_2fc44c;
        }
    }
    ctx->pc = 0x2FC43Cu;
    // 0x2fc43c: 0xc0beeb0  jal         func_2FBAC0
    ctx->pc = 0x2FC43Cu;
    SET_GPR_U32(ctx, 31, 0x2FC444u);
    ctx->pc = 0x2FBAC0u;
    if (runtime->hasFunction(0x2FBAC0u)) {
        auto targetFn = runtime->lookupFunction(0x2FBAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC444u; }
        if (ctx->pc != 0x2FC444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceAnime__Fv_0x2fbac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC444u; }
        if (ctx->pc != 0x2FC444u) { return; }
    }
    ctx->pc = 0x2FC444u;
label_2fc444:
    // 0x2fc444: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC444u;
    {
        const bool branch_taken_0x2fc444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC444u;
            // 0x2fc448: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc444) {
            ctx->pc = 0x2FC460u;
            goto label_2fc460;
        }
    }
    ctx->pc = 0x2FC44Cu;
label_2fc44c:
    // 0x2fc44c: 0xc0bf0f4  jal         func_2FC3D0
    ctx->pc = 0x2FC44Cu;
    SET_GPR_U32(ctx, 31, 0x2FC454u);
    ctx->pc = 0x2FC3D0u;
    if (runtime->hasFunction(0x2FC3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC454u; }
        if (ctx->pc != 0x2FC454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditGetPlaceAnimeState__Fv_0x2fc3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC454u; }
        if (ctx->pc != 0x2FC454u) { return; }
    }
    ctx->pc = 0x2FC454u;
label_2fc454:
    // 0x2fc454: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2fc454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2fc458: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2fc458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2fc45c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fc45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2fc460:
    // 0x2fc460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc464: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC464u;
            // 0x2fc468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC46Cu;
}
