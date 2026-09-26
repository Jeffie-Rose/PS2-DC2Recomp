#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitStatusSprite__7CSphidaFv
// Address: 0x2ea340 - 0x2ea390
void InitStatusSprite__7CSphidaFv_0x2ea340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitStatusSprite__7CSphidaFv_0x2ea340");
#endif

    switch (ctx->pc) {
        case 0x2ea368u: goto label_2ea368;
        default: break;
    }

    ctx->pc = 0x2ea340u;

    // 0x2ea340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea344: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ea344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ea348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ea348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ea34c: 0x24a514f8  addiu       $a1, $a1, 0x14F8
    ctx->pc = 0x2ea34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5368));
    // 0x2ea350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ea350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ea354: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ea354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ea358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea35c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2ea35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ea360: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2EA360u;
    SET_GPR_U32(ctx, 31, 0x2EA368u);
    ctx->pc = 0x2EA364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA360u;
            // 0x2ea364: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA368u; }
        if (ctx->pc != 0x2EA368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA368u; }
        if (ctx->pc != 0x2EA368u) { return; }
    }
    ctx->pc = 0x2EA368u;
label_2ea368:
    // 0x2ea368: 0x3c044380  lui         $a0, 0x4380
    ctx->pc = 0x2ea368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17280 << 16));
    // 0x2ea36c: 0x3c0343bb  lui         $v1, 0x43BB
    ctx->pc = 0x2ea36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17339 << 16));
    // 0x2ea370: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2ea370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2ea374: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ea374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ea378: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2ea378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2ea37c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2ea37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2ea380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ea384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea388: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA388u;
            // 0x2ea38c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EA390u;
}
