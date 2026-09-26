#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachCommonTexInfo__18CMenuPosDataManageFv
// Address: 0x22b4e0 - 0x22b590
void AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0");
#endif

    switch (ctx->pc) {
        case 0x22b508u: goto label_22b508;
        case 0x22b528u: goto label_22b528;
        case 0x22b544u: goto label_22b544;
        case 0x22b560u: goto label_22b560;
        case 0x22b57cu: goto label_22b57c;
        default: break;
    }

    ctx->pc = 0x22b4e0u;

    // 0x22b4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b4e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22b4e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b4ec: 0x24a5a690  addiu       $a1, $a1, -0x5970
    ctx->pc = 0x22b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944400));
    // 0x22b4f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b4f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22b4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b4f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b4fc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22b500: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22B500u;
    SET_GPR_U32(ctx, 31, 0x22B508u);
    ctx->pc = 0x22B504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B500u;
            // 0x22b504: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B508u; }
        if (ctx->pc != 0x22B508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B508u; }
        if (ctx->pc != 0x22B508u) { return; }
    }
    ctx->pc = 0x22B508u;
label_22b508:
    // 0x22b508: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22b508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22b50c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22b510: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x22b510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x22b514: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22b514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22b518: 0x24a5a6a0  addiu       $a1, $a1, -0x5960
    ctx->pc = 0x22b518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944416));
    // 0x22b51c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22b51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b520: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22B520u;
    SET_GPR_U32(ctx, 31, 0x22B528u);
    ctx->pc = 0x22B524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B520u;
            // 0x22b524: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B528u; }
        if (ctx->pc != 0x22B528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B528u; }
        if (ctx->pc != 0x22B528u) { return; }
    }
    ctx->pc = 0x22B528u;
label_22b528:
    // 0x22b528: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22b528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22b52c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22b52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22b530: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x22b530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x22b534: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22b534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22b538: 0x24a5a6b0  addiu       $a1, $a1, -0x5950
    ctx->pc = 0x22b538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944432));
    // 0x22b53c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22B53Cu;
    SET_GPR_U32(ctx, 31, 0x22B544u);
    ctx->pc = 0x22B540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B53Cu;
            // 0x22b540: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B544u; }
        if (ctx->pc != 0x22B544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B544u; }
        if (ctx->pc != 0x22B544u) { return; }
    }
    ctx->pc = 0x22B544u;
label_22b544:
    // 0x22b544: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22b544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22b548: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22b548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22b54c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x22b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x22b550: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22b550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22b554: 0x24a5a6b8  addiu       $a1, $a1, -0x5948
    ctx->pc = 0x22b554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944440));
    // 0x22b558: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22B558u;
    SET_GPR_U32(ctx, 31, 0x22B560u);
    ctx->pc = 0x22B55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B558u;
            // 0x22b55c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B560u; }
        if (ctx->pc != 0x22B560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B560u; }
        if (ctx->pc != 0x22B560u) { return; }
    }
    ctx->pc = 0x22B560u;
label_22b560:
    // 0x22b560: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22b560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22b564: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22b564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22b568: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x22b568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x22b56c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22b570: 0x24a5a6c0  addiu       $a1, $a1, -0x5940
    ctx->pc = 0x22b570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944448));
    // 0x22b574: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22B574u;
    SET_GPR_U32(ctx, 31, 0x22B57Cu);
    ctx->pc = 0x22B578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B574u;
            // 0x22b578: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B57Cu; }
        if (ctx->pc != 0x22B57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B57Cu; }
        if (ctx->pc != 0x22B57Cu) { return; }
    }
    ctx->pc = 0x22B57Cu;
label_22b57c:
    // 0x22b57c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x22b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x22b580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b588: 0x3e00008  jr          $ra
    ctx->pc = 0x22B588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B588u;
            // 0x22b58c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B590u;
}
