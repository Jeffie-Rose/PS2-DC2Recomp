#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _clearEach
// Address: 0x10ec88 - 0x10ed44
void _clearEach_0x10ec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_clearEach_0x10ec88");
#endif

    switch (ctx->pc) {
        case 0x10eca0u: goto label_10eca0;
        case 0x10ecfcu: goto label_10ecfc;
        default: break;
    }

    ctx->pc = 0x10ec88u;

    // 0x10ec88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ec88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ec8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ec90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ec94: 0xac820818  sw          $v0, 0x818($a0)
    ctx->pc = 0x10ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
    // 0x10ec98: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10EC98u;
    SET_GPR_U32(ctx, 31, 0x10ECA0u);
    ctx->pc = 0x10EC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC98u;
            // 0x10ec9c: 0xac8001b0  sw          $zero, 0x1B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ECA0u; }
        if (ctx->pc != 0x10ECA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ECA0u; }
        if (ctx->pc != 0x10ECA0u) { return; }
    }
    ctx->pc = 0x10ECA0u;
label_10eca0:
    // 0x10eca0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10eca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10eca4: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x10eca4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x10eca8: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x10eca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x10ecac: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10ecacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10ecb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10ecb4: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x10ecb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x10ecb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ecbc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ecc0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10ecc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10ecc4: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10ecc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10ecc8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10eccc: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10ecccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10ecd0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x10ecd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ecd8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x10ecdc: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x10ecdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x10ece0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10ece4: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x10ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x10ece8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10ece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10ecec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10ecf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10ecf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10ecf4: 0xc04630a  jal         func_118C28
    ctx->pc = 0x10ECF4u;
    SET_GPR_U32(ctx, 31, 0x10ECFCu);
    ctx->pc = 0x10ECF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ECF4u;
            // 0x10ecf8: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ECFCu; }
        if (ctx->pc != 0x10ECFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ECFCu; }
        if (ctx->pc != 0x10ECFCu) { return; }
    }
    ctx->pc = 0x10ECFCu;
label_10ecfc:
    // 0x10ecfc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ed00: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ed04: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x10ed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x10ed08: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10ed08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10ed0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x10ed10: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ed14: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x10ed18: 0x3442d420  ori         $v0, $v0, 0xD420
    ctx->pc = 0x10ed18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54304);
    // 0x10ed1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10ed20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ed24: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10ed24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10ed28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x10ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x10ed2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ed2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ed30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10ed30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10ed38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed3c: 0x8043e6a  j           func_10F9A8
    ctx->pc = 0x10ED3Cu;
    ctx->pc = 0x10ED40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED3Cu;
            // 0x10ed40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9A8u;
    if (runtime->hasFunction(0x10F9A8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9A8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceIpuSync_0x10f9a8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10ED44u;
}
