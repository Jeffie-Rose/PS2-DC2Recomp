#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MySetTex__FPcP11mgCDrawPrim
// Address: 0x2d5470 - 0x2d54b4
void MySetTex__FPcP11mgCDrawPrim_0x2d5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MySetTex__FPcP11mgCDrawPrim_0x2d5470");
#endif

    switch (ctx->pc) {
        case 0x2d5498u: goto label_2d5498;
        case 0x2d54a4u: goto label_2d54a4;
        default: break;
    }

    ctx->pc = 0x2d5470u;

    // 0x2d5470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d5474: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d5474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d547c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2d547cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2d5480: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5484: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2d5484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2d5488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d5488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d548c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d548cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5490: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2D5490u;
    SET_GPR_U32(ctx, 31, 0x2D5498u);
    ctx->pc = 0x2D5494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5490u;
            // 0x2d5494: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5498u; }
        if (ctx->pc != 0x2D5498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5498u; }
        if (ctx->pc != 0x2D5498u) { return; }
    }
    ctx->pc = 0x2D5498u;
label_2d5498:
    // 0x2d5498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d549c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2D549Cu;
    SET_GPR_U32(ctx, 31, 0x2D54A4u);
    ctx->pc = 0x2D54A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D549Cu;
            // 0x2d54a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D54A4u; }
        if (ctx->pc != 0x2D54A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D54A4u; }
        if (ctx->pc != 0x2D54A4u) { return; }
    }
    ctx->pc = 0x2D54A4u;
label_2d54a4:
    // 0x2d54a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d54a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d54a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d54a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d54ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D54ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D54B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D54ACu;
            // 0x2d54b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D54B4u;
}
