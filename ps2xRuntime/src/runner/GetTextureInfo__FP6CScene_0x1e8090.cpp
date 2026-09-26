#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTextureInfo__FP6CScene
// Address: 0x1e8090 - 0x1e8210
void GetTextureInfo__FP6CScene_0x1e8090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTextureInfo__FP6CScene_0x1e8090");
#endif

    switch (ctx->pc) {
        case 0x1e80b0u: goto label_1e80b0;
        case 0x1e80ccu: goto label_1e80cc;
        case 0x1e80e8u: goto label_1e80e8;
        case 0x1e8104u: goto label_1e8104;
        case 0x1e8120u: goto label_1e8120;
        case 0x1e813cu: goto label_1e813c;
        case 0x1e8158u: goto label_1e8158;
        case 0x1e8174u: goto label_1e8174;
        case 0x1e8190u: goto label_1e8190;
        case 0x1e81acu: goto label_1e81ac;
        case 0x1e81c8u: goto label_1e81c8;
        case 0x1e81e4u: goto label_1e81e4;
        case 0x1e8200u: goto label_1e8200;
        default: break;
    }

    ctx->pc = 0x1e8090u;

    // 0x1e8090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8094: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e8098: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e809c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e80a0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e80a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e80a4: 0x24a580d0  addiu       $a1, $a1, -0x7F30
    ctx->pc = 0x1e80a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934736));
    // 0x1e80a8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E80A8u;
    SET_GPR_U32(ctx, 31, 0x1E80B0u);
    ctx->pc = 0x1E80ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80A8u;
            // 0x1e80ac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80B0u; }
        if (ctx->pc != 0x1E80B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80B0u; }
        if (ctx->pc != 0x1E80B0u) { return; }
    }
    ctx->pc = 0x1E80B0u;
label_1e80b0:
    // 0x1e80b0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e80b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e80b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e80b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e80b8: 0xaf828e78  sw          $v0, -0x7188($gp)
    ctx->pc = 0x1e80b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938232), GPR_U32(ctx, 2));
    // 0x1e80bc: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e80bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e80c0: 0x24a580d8  addiu       $a1, $a1, -0x7F28
    ctx->pc = 0x1e80c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934744));
    // 0x1e80c4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E80C4u;
    SET_GPR_U32(ctx, 31, 0x1E80CCu);
    ctx->pc = 0x1E80C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80C4u;
            // 0x1e80c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80CCu; }
        if (ctx->pc != 0x1E80CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80CCu; }
        if (ctx->pc != 0x1E80CCu) { return; }
    }
    ctx->pc = 0x1E80CCu;
label_1e80cc:
    // 0x1e80cc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e80ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e80d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e80d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e80d4: 0xaf828e7c  sw          $v0, -0x7184($gp)
    ctx->pc = 0x1e80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938236), GPR_U32(ctx, 2));
    // 0x1e80d8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e80d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e80dc: 0x24a580e0  addiu       $a1, $a1, -0x7F20
    ctx->pc = 0x1e80dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934752));
    // 0x1e80e0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E80E0u;
    SET_GPR_U32(ctx, 31, 0x1E80E8u);
    ctx->pc = 0x1E80E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80E0u;
            // 0x1e80e4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80E8u; }
        if (ctx->pc != 0x1E80E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80E8u; }
        if (ctx->pc != 0x1E80E8u) { return; }
    }
    ctx->pc = 0x1E80E8u;
label_1e80e8:
    // 0x1e80e8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e80e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e80ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e80ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e80f0: 0xaf828e80  sw          $v0, -0x7180($gp)
    ctx->pc = 0x1e80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
    // 0x1e80f4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e80f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e80f8: 0x24a580e8  addiu       $a1, $a1, -0x7F18
    ctx->pc = 0x1e80f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934760));
    // 0x1e80fc: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E80FCu;
    SET_GPR_U32(ctx, 31, 0x1E8104u);
    ctx->pc = 0x1E8100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80FCu;
            // 0x1e8100: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8104u; }
        if (ctx->pc != 0x1E8104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8104u; }
        if (ctx->pc != 0x1E8104u) { return; }
    }
    ctx->pc = 0x1E8104u;
label_1e8104:
    // 0x1e8104: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e8108: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e810c: 0xaf828e84  sw          $v0, -0x717C($gp)
    ctx->pc = 0x1e810cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938244), GPR_U32(ctx, 2));
    // 0x1e8110: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8114: 0x24a580f8  addiu       $a1, $a1, -0x7F08
    ctx->pc = 0x1e8114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934776));
    // 0x1e8118: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E8118u;
    SET_GPR_U32(ctx, 31, 0x1E8120u);
    ctx->pc = 0x1E811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8118u;
            // 0x1e811c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8120u; }
        if (ctx->pc != 0x1E8120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8120u; }
        if (ctx->pc != 0x1E8120u) { return; }
    }
    ctx->pc = 0x1E8120u;
label_1e8120:
    // 0x1e8120: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e8124: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8128: 0xaf828e88  sw          $v0, -0x7178($gp)
    ctx->pc = 0x1e8128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938248), GPR_U32(ctx, 2));
    // 0x1e812c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e812cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8130: 0x24a58108  addiu       $a1, $a1, -0x7EF8
    ctx->pc = 0x1e8130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934792));
    // 0x1e8134: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E8134u;
    SET_GPR_U32(ctx, 31, 0x1E813Cu);
    ctx->pc = 0x1E8138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8134u;
            // 0x1e8138: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E813Cu; }
        if (ctx->pc != 0x1E813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E813Cu; }
        if (ctx->pc != 0x1E813Cu) { return; }
    }
    ctx->pc = 0x1E813Cu;
label_1e813c:
    // 0x1e813c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e813cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e8140: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8144: 0xaf828e8c  sw          $v0, -0x7174($gp)
    ctx->pc = 0x1e8144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938252), GPR_U32(ctx, 2));
    // 0x1e8148: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e814c: 0x24a58118  addiu       $a1, $a1, -0x7EE8
    ctx->pc = 0x1e814cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934808));
    // 0x1e8150: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E8150u;
    SET_GPR_U32(ctx, 31, 0x1E8158u);
    ctx->pc = 0x1E8154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8150u;
            // 0x1e8154: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8158u; }
        if (ctx->pc != 0x1E8158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8158u; }
        if (ctx->pc != 0x1E8158u) { return; }
    }
    ctx->pc = 0x1E8158u;
label_1e8158:
    // 0x1e8158: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e815c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e815cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8160: 0xaf828e90  sw          $v0, -0x7170($gp)
    ctx->pc = 0x1e8160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938256), GPR_U32(ctx, 2));
    // 0x1e8164: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8168: 0x24a58128  addiu       $a1, $a1, -0x7ED8
    ctx->pc = 0x1e8168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934824));
    // 0x1e816c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E816Cu;
    SET_GPR_U32(ctx, 31, 0x1E8174u);
    ctx->pc = 0x1E8170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E816Cu;
            // 0x1e8170: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8174u; }
        if (ctx->pc != 0x1E8174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8174u; }
        if (ctx->pc != 0x1E8174u) { return; }
    }
    ctx->pc = 0x1E8174u;
label_1e8174:
    // 0x1e8174: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e8178: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e817c: 0xaf828e94  sw          $v0, -0x716C($gp)
    ctx->pc = 0x1e817cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938260), GPR_U32(ctx, 2));
    // 0x1e8180: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8184: 0x24a58138  addiu       $a1, $a1, -0x7EC8
    ctx->pc = 0x1e8184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934840));
    // 0x1e8188: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E8188u;
    SET_GPR_U32(ctx, 31, 0x1E8190u);
    ctx->pc = 0x1E818Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8188u;
            // 0x1e818c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8190u; }
        if (ctx->pc != 0x1E8190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8190u; }
        if (ctx->pc != 0x1E8190u) { return; }
    }
    ctx->pc = 0x1E8190u;
label_1e8190:
    // 0x1e8190: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e8194: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8198: 0xaf828e98  sw          $v0, -0x7168($gp)
    ctx->pc = 0x1e8198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938264), GPR_U32(ctx, 2));
    // 0x1e819c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e819cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e81a0: 0x24a58148  addiu       $a1, $a1, -0x7EB8
    ctx->pc = 0x1e81a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934856));
    // 0x1e81a4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E81A4u;
    SET_GPR_U32(ctx, 31, 0x1E81ACu);
    ctx->pc = 0x1E81A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E81A4u;
            // 0x1e81a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81ACu; }
        if (ctx->pc != 0x1E81ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81ACu; }
        if (ctx->pc != 0x1E81ACu) { return; }
    }
    ctx->pc = 0x1E81ACu;
label_1e81ac:
    // 0x1e81ac: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e81acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e81b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e81b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e81b4: 0xaf828e9c  sw          $v0, -0x7164($gp)
    ctx->pc = 0x1e81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938268), GPR_U32(ctx, 2));
    // 0x1e81b8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e81b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e81bc: 0x24a58150  addiu       $a1, $a1, -0x7EB0
    ctx->pc = 0x1e81bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934864));
    // 0x1e81c0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E81C0u;
    SET_GPR_U32(ctx, 31, 0x1E81C8u);
    ctx->pc = 0x1E81C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E81C0u;
            // 0x1e81c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81C8u; }
        if (ctx->pc != 0x1E81C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81C8u; }
        if (ctx->pc != 0x1E81C8u) { return; }
    }
    ctx->pc = 0x1E81C8u;
label_1e81c8:
    // 0x1e81c8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e81cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e81ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e81d0: 0xaf828ea0  sw          $v0, -0x7160($gp)
    ctx->pc = 0x1e81d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938272), GPR_U32(ctx, 2));
    // 0x1e81d4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e81d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e81d8: 0x24a58160  addiu       $a1, $a1, -0x7EA0
    ctx->pc = 0x1e81d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934880));
    // 0x1e81dc: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E81DCu;
    SET_GPR_U32(ctx, 31, 0x1E81E4u);
    ctx->pc = 0x1E81E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E81DCu;
            // 0x1e81e0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81E4u; }
        if (ctx->pc != 0x1E81E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81E4u; }
        if (ctx->pc != 0x1E81E4u) { return; }
    }
    ctx->pc = 0x1E81E4u;
label_1e81e4:
    // 0x1e81e4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e81e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e81e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e81ec: 0xaf828ea4  sw          $v0, -0x715C($gp)
    ctx->pc = 0x1e81ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938276), GPR_U32(ctx, 2));
    // 0x1e81f0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e81f4: 0x24a58170  addiu       $a1, $a1, -0x7E90
    ctx->pc = 0x1e81f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934896));
    // 0x1e81f8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E81F8u;
    SET_GPR_U32(ctx, 31, 0x1E8200u);
    ctx->pc = 0x1E81FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E81F8u;
            // 0x1e81fc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8200u; }
        if (ctx->pc != 0x1E8200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8200u; }
        if (ctx->pc != 0x1E8200u) { return; }
    }
    ctx->pc = 0x1E8200u;
label_1e8200:
    // 0x1e8200: 0xaf828ea8  sw          $v0, -0x7158($gp)
    ctx->pc = 0x1e8200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938280), GPR_U32(ctx, 2));
    // 0x1e8204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8208: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E820Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8208u;
            // 0x1e820c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8210u;
}
