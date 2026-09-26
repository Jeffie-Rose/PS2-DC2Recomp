#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RushMovieDraw__Fv
// Address: 0x2a0eb0 - 0x2a1018
void RushMovieDraw__Fv_0x2a0eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RushMovieDraw__Fv_0x2a0eb0");
#endif

    switch (ctx->pc) {
        case 0x2a0eccu: goto label_2a0ecc;
        case 0x2a0ed4u: goto label_2a0ed4;
        case 0x2a0f20u: goto label_2a0f20;
        case 0x2a0f30u: goto label_2a0f30;
        case 0x2a0f38u: goto label_2a0f38;
        case 0x2a0f44u: goto label_2a0f44;
        case 0x2a0f50u: goto label_2a0f50;
        case 0x2a0f5cu: goto label_2a0f5c;
        case 0x2a0f74u: goto label_2a0f74;
        case 0x2a0f94u: goto label_2a0f94;
        case 0x2a0fa0u: goto label_2a0fa0;
        case 0x2a0fb8u: goto label_2a0fb8;
        case 0x2a0fd8u: goto label_2a0fd8;
        case 0x2a0fe0u: goto label_2a0fe0;
        case 0x2a1004u: goto label_2a1004;
        case 0x2a100cu: goto label_2a100c;
        default: break;
    }

    ctx->pc = 0x2a0eb0u;

    // 0x2a0eb0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2a0eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2a0eb4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2a0eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2a0eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a0ebc: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2a0ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2a0ec0: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x2a0ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2a0ec4: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A0EC4u;
    SET_GPR_U32(ctx, 31, 0x2A0ECCu);
    ctx->pc = 0x2A0EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EC4u;
            // 0x2a0ec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0ECCu; }
        if (ctx->pc != 0x2A0ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0ECCu; }
        if (ctx->pc != 0x2A0ECCu) { return; }
    }
    ctx->pc = 0x2A0ECCu;
label_2a0ecc:
    // 0x2a0ecc: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2A0ECCu;
    SET_GPR_U32(ctx, 31, 0x2A0ED4u);
    ctx->pc = 0x2A0ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0ECCu;
            // 0x2a0ed0: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0ED4u; }
        if (ctx->pc != 0x2A0ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0ED4u; }
        if (ctx->pc != 0x2A0ED4u) { return; }
    }
    ctx->pc = 0x2A0ED4u;
label_2a0ed4:
    // 0x2a0ed4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0ed8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a0ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0edc: 0x8c256250  lw          $a1, 0x6250($at)
    ctx->pc = 0x2a0edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25168)));
    // 0x2a0ee0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A0EE0u;
    {
        const bool branch_taken_0x2a0ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A0EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EE0u;
            // 0x2a0ee4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ee0) {
            ctx->pc = 0x2A0F18u;
            goto label_2a0f18;
        }
    }
    ctx->pc = 0x2A0EE8u;
    // 0x2a0ee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0eec: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0EECu;
    {
        const bool branch_taken_0x2a0eec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A0EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EECu;
            // 0x2a0ef0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0eec) {
            ctx->pc = 0x2A0F14u;
            goto label_2a0f14;
        }
    }
    ctx->pc = 0x2A0EF4u;
    // 0x2a0ef4: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0EF4u;
    {
        const bool branch_taken_0x2a0ef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a0ef4) {
            ctx->pc = 0x2A0F14u;
            goto label_2a0f14;
        }
    }
    ctx->pc = 0x2A0EFCu;
    // 0x2a0efc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0EFCu;
    {
        const bool branch_taken_0x2a0efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EFCu;
            // 0x2a0f00: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0efc) {
            ctx->pc = 0x2A0F0Cu;
            goto label_2a0f0c;
        }
    }
    ctx->pc = 0x2A0F04u;
    // 0x2a0f04: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2A0F04u;
    {
        const bool branch_taken_0x2a0f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0f04) {
            ctx->pc = 0x2A0FE0u;
            goto label_2a0fe0;
        }
    }
    ctx->pc = 0x2A0F0Cu;
label_2a0f0c:
    // 0x2a0f0c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2A0F0Cu;
    {
        const bool branch_taken_0x2a0f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F0Cu;
            // 0x2a0f10: 0xac246250  sw          $a0, 0x6250($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25168), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f0c) {
            ctx->pc = 0x2A0FE0u;
            goto label_2a0fe0;
        }
    }
    ctx->pc = 0x2A0F14u;
label_2a0f14:
    // 0x2a0f14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a0f18:
    // 0x2a0f18: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2A0F18u;
    SET_GPR_U32(ctx, 31, 0x2A0F20u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F20u; }
        if (ctx->pc != 0x2A0F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F20u; }
        if (ctx->pc != 0x2A0F20u) { return; }
    }
    ctx->pc = 0x2A0F20u;
label_2a0f20:
    // 0x2a0f20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f28: 0xc04d104  jal         func_134410
    ctx->pc = 0x2A0F28u;
    SET_GPR_U32(ctx, 31, 0x2A0F30u);
    ctx->pc = 0x2A0F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F28u;
            // 0x2a0f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F30u; }
        if (ctx->pc != 0x2A0F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F30u; }
        if (ctx->pc != 0x2A0F30u) { return; }
    }
    ctx->pc = 0x2A0F30u;
label_2a0f30:
    // 0x2a0f30: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x2A0F30u;
    SET_GPR_U32(ctx, 31, 0x2A0F38u);
    ctx->pc = 0x2A0F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F30u;
            // 0x2a0f34: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F38u; }
        if (ctx->pc != 0x2A0F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F38u; }
        if (ctx->pc != 0x2A0F38u) { return; }
    }
    ctx->pc = 0x2A0F38u;
label_2a0f38:
    // 0x2a0f38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0f3c: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2A0F3Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F44u);
    ctx->pc = 0x2A0F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F3Cu;
            // 0x2a0f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F44u; }
        if (ctx->pc != 0x2A0F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F44u; }
        if (ctx->pc != 0x2A0F44u) { return; }
    }
    ctx->pc = 0x2A0F44u;
label_2a0f44:
    // 0x2a0f44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0f48: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2A0F48u;
    SET_GPR_U32(ctx, 31, 0x2A0F50u);
    ctx->pc = 0x2A0F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F48u;
            // 0x2a0f4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F50u; }
        if (ctx->pc != 0x2A0F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F50u; }
        if (ctx->pc != 0x2A0F50u) { return; }
    }
    ctx->pc = 0x2A0F50u;
label_2a0f50:
    // 0x2a0f50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0f54: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2A0F54u;
    SET_GPR_U32(ctx, 31, 0x2A0F5Cu);
    ctx->pc = 0x2A0F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F54u;
            // 0x2a0f58: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F5Cu; }
        if (ctx->pc != 0x2A0F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F5Cu; }
        if (ctx->pc != 0x2A0F5Cu) { return; }
    }
    ctx->pc = 0x2A0F5Cu;
label_2a0f5c:
    // 0x2a0f5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0f60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f6c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A0F6Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F74u);
    ctx->pc = 0x2A0F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F6Cu;
            // 0x2a0f70: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F74u; }
        if (ctx->pc != 0x2A0F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F74u; }
        if (ctx->pc != 0x2A0F74u) { return; }
    }
    ctx->pc = 0x2A0F74u;
label_2a0f74:
    // 0x2a0f74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f80: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a0f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a0f84: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2a0f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2a0f88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a0f88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f8c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x2A0F8Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F94u);
    ctx->pc = 0x2A0F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F8Cu;
            // 0x2a0f90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F94u; }
        if (ctx->pc != 0x2A0F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F94u; }
        if (ctx->pc != 0x2A0F94u) { return; }
    }
    ctx->pc = 0x2A0F94u;
label_2a0f94:
    // 0x2a0f94: 0x8f8599e8  lw          $a1, -0x6618($gp)
    ctx->pc = 0x2a0f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941160)));
    // 0x2a0f98: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2A0F98u;
    SET_GPR_U32(ctx, 31, 0x2A0FA0u);
    ctx->pc = 0x2A0F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0F98u;
            // 0x2a0f9c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FA0u; }
        if (ctx->pc != 0x2A0FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FA0u; }
        if (ctx->pc != 0x2A0FA0u) { return; }
    }
    ctx->pc = 0x2A0FA0u;
label_2a0fa0:
    // 0x2a0fa0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a0fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a0fa4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0fa8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a0fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a0facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fb0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A0FB0u;
    SET_GPR_U32(ctx, 31, 0x2A0FB8u);
    ctx->pc = 0x2A0FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0FB0u;
            // 0x2a0fb4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FB8u; }
        if (ctx->pc != 0x2A0FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FB8u; }
        if (ctx->pc != 0x2A0FB8u) { return; }
    }
    ctx->pc = 0x2A0FB8u;
label_2a0fb8:
    // 0x2a0fb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a0fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a0fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a0fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fc4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a0fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a0fc8: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2a0fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2a0fcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a0fccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fd0: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x2A0FD0u;
    SET_GPR_U32(ctx, 31, 0x2A0FD8u);
    ctx->pc = 0x2A0FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0FD0u;
            // 0x2a0fd4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FD8u; }
        if (ctx->pc != 0x2A0FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FD8u; }
        if (ctx->pc != 0x2A0FD8u) { return; }
    }
    ctx->pc = 0x2A0FD8u;
label_2a0fd8:
    // 0x2a0fd8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2A0FD8u;
    SET_GPR_U32(ctx, 31, 0x2A0FE0u);
    ctx->pc = 0x2A0FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0FD8u;
            // 0x2a0fdc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FE0u; }
        if (ctx->pc != 0x2A0FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FE0u; }
        if (ctx->pc != 0x2A0FE0u) { return; }
    }
    ctx->pc = 0x2A0FE0u;
label_2a0fe0:
    // 0x2a0fe0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0fe4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a0fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0fe8: 0x8c246250  lw          $a0, 0x6250($at)
    ctx->pc = 0x2a0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25168)));
    // 0x2a0fec: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0FECu;
    {
        const bool branch_taken_0x2a0fec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a0fec) {
            ctx->pc = 0x2A100Cu;
            goto label_2a100c;
        }
    }
    ctx->pc = 0x2A0FF4u;
    // 0x2a0ff4: 0x8f8499e0  lw          $a0, -0x6620($gp)
    ctx->pc = 0x2a0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
    // 0x2a0ff8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a0ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a0ffc: 0xc0a6378  jal         func_298DE0
    ctx->pc = 0x2A0FFCu;
    SET_GPR_U32(ctx, 31, 0x2A1004u);
    ctx->pc = 0x2A1000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0FFCu;
            // 0x2a1000: 0xac206250  sw          $zero, 0x6250($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298DE0u;
    if (runtime->hasFunction(0x298DE0u)) {
        auto targetFn = runtime->lookupFunction(0x298DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1004u; }
        if (ctx->pc != 0x2A1004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Term__6CMovieFv_0x298de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1004u; }
        if (ctx->pc != 0x2A1004u) { return; }
    }
    ctx->pc = 0x2A1004u;
label_2a1004:
    // 0x2a1004: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2A1004u;
    SET_GPR_U32(ctx, 31, 0x2A100Cu);
    ctx->pc = 0x2A1008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1004u;
            // 0x2a1008: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A100Cu; }
        if (ctx->pc != 0x2A100Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A100Cu; }
        if (ctx->pc != 0x2A100Cu) { return; }
    }
    ctx->pc = 0x2A100Cu;
label_2a100c:
    // 0x2a100c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a100cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1010: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1010u;
            // 0x2a1014: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1018u;
}
