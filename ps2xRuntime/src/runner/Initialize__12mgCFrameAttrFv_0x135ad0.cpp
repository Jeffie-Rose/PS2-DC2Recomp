#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12mgCFrameAttrFv
// Address: 0x135ad0 - 0x135b60
void Initialize__12mgCFrameAttrFv_0x135ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12mgCFrameAttrFv_0x135ad0");
#endif

    switch (ctx->pc) {
        case 0x135aecu: goto label_135aec;
        case 0x135af4u: goto label_135af4;
        default: break;
    }

    ctx->pc = 0x135ad0u;

    // 0x135ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x135adc: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x135adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x135ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135ae4: 0xc049c86  jal         func_127218
    ctx->pc = 0x135AE4u;
    SET_GPR_U32(ctx, 31, 0x135AECu);
    ctx->pc = 0x135AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135AE4u;
            // 0x135ae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135AECu; }
        if (ctx->pc != 0x135AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135AECu; }
        if (ctx->pc != 0x135AECu) { return; }
    }
    ctx->pc = 0x135AECu;
label_135aec:
    // 0x135aec: 0xc04f9ec  jal         func_13E7B0
    ctx->pc = 0x135AECu;
    SET_GPR_U32(ctx, 31, 0x135AF4u);
    ctx->pc = 0x135AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135AECu;
            // 0x135af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E7B0u;
    if (runtime->hasFunction(0x13E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135AF4u; }
        if (ctx->pc != 0x135AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13mgCVisualAttrFv_0x13e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135AF4u; }
        if (ctx->pc != 0x135AF4u) { return; }
    }
    ctx->pc = 0x135AF4u;
label_135af4:
    // 0x135af4: 0x3c074300  lui         $a3, 0x4300
    ctx->pc = 0x135af4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17152 << 16));
    // 0x135af8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x135af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135afc: 0xae07007c  sw          $a3, 0x7C($s0)
    ctx->pc = 0x135afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 7));
    // 0x135b00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x135b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135b04: 0xae070078  sw          $a3, 0x78($s0)
    ctx->pc = 0x135b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 7));
    // 0x135b08: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x135b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x135b0c: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x135b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x135b10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x135b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x135b14: 0xae070070  sw          $a3, 0x70($s0)
    ctx->pc = 0x135b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 7));
    // 0x135b18: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x135b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x135b1c: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x135b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x135b20: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x135b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x135b24: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x135b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x135b28: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x135b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x135b2c: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x135b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x135b30: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x135b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x135b34: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x135b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
    // 0x135b38: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x135b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x135b3c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x135b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x135b40: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x135b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x135b44: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x135b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x135b48: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x135b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x135b4c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x135b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x135b50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135b58: 0x3e00008  jr          $ra
    ctx->pc = 0x135B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135B58u;
            // 0x135b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135B60u;
}
