#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: set_spu__Fiiii
// Address: 0x188a40 - 0x188b8c
void set_spu__Fiiii_0x188a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_spu__Fiiii_0x188a40");
#endif

    switch (ctx->pc) {
        case 0x188a6cu: goto label_188a6c;
        case 0x188a7cu: goto label_188a7c;
        case 0x188a90u: goto label_188a90;
        case 0x188a9cu: goto label_188a9c;
        case 0x188ab8u: goto label_188ab8;
        case 0x188ae4u: goto label_188ae4;
        case 0x188af8u: goto label_188af8;
        case 0x188b1cu: goto label_188b1c;
        case 0x188b30u: goto label_188b30;
        case 0x188b44u: goto label_188b44;
        case 0x188b58u: goto label_188b58;
        default: break;
    }

    ctx->pc = 0x188a40u;

    // 0x188a40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x188a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x188a44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x188a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x188a48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x188a4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188a54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188a58: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x188a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x188a5c: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x188a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
    // 0x188a60: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x188a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x188a64: 0xc046404  jal         func_119010
    ctx->pc = 0x188A64u;
    SET_GPR_U32(ctx, 31, 0x188A6Cu);
    ctx->pc = 0x188A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A64u;
            // 0x188a68: 0xafa7007c  sw          $a3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119010u;
    if (runtime->hasFunction(0x119010u)) {
        auto targetFn = runtime->lookupFunction(0x119010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A6Cu; }
        if (ctx->pc != 0x188A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemoteInit_0x119010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A6Cu; }
        if (ctx->pc != 0x188A6Cu) { return; }
    }
    ctx->pc = 0x188A6Cu;
label_188a6c:
    // 0x188a6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188a70: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x188a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x188a74: 0xc046454  jal         func_119150
    ctx->pc = 0x188A74u;
    SET_GPR_U32(ctx, 31, 0x188A7Cu);
    ctx->pc = 0x188A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A74u;
            // 0x188a78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A7Cu; }
        if (ctx->pc != 0x188A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A7Cu; }
        if (ctx->pc != 0x188A7Cu) { return; }
    }
    ctx->pc = 0x188A7Cu;
label_188a7c:
    // 0x188a7c: 0x34058070  ori         $a1, $zero, 0x8070
    ctx->pc = 0x188a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32880);
    // 0x188a80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188a84: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x188a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x188a88: 0xc046454  jal         func_119150
    ctx->pc = 0x188A88u;
    SET_GPR_U32(ctx, 31, 0x188A90u);
    ctx->pc = 0x188A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A88u;
            // 0x188a8c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A90u; }
        if (ctx->pc != 0x188A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A90u; }
        if (ctx->pc != 0x188A90u) { return; }
    }
    ctx->pc = 0x188A90u;
label_188a90:
    // 0x188a90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x188a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x188a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x188a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188a9c:
    // 0x188a9c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x188a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x188aa0: 0x36061d00  ori         $a2, $s0, 0x1D00
    ctx->pc = 0x188aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)7424);
    // 0x188aa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x188aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x188aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188aac: 0x513823  subu        $a3, $v0, $s1
    ctx->pc = 0x188aacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x188ab0: 0xc046454  jal         func_119150
    ctx->pc = 0x188AB0u;
    SET_GPR_U32(ctx, 31, 0x188AB8u);
    ctx->pc = 0x188AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188AB0u;
            // 0x188ab4: 0x34058050  ori         $a1, $zero, 0x8050 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32848);
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188AB8u; }
        if (ctx->pc != 0x188AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188AB8u; }
        if (ctx->pc != 0x188AB8u) { return; }
    }
    ctx->pc = 0x188AB8u;
label_188ab8:
    // 0x188ab8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x188ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x188abc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188ac0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x188ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x188ac4: 0x34058130  ori         $a1, $zero, 0x8130
    ctx->pc = 0x188ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
    // 0x188ac8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x188ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188acc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x188accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x188ad0: 0xa7a00058  sh          $zero, 0x58($sp)
    ctx->pc = 0x188ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x188ad4: 0xa7a0005a  sh          $zero, 0x5A($sp)
    ctx->pc = 0x188ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x188ad8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x188ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x188adc: 0xc046454  jal         func_119150
    ctx->pc = 0x188ADCu;
    SET_GPR_U32(ctx, 31, 0x188AE4u);
    ctx->pc = 0x188AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188ADCu;
            // 0x188ae0: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188AE4u; }
        if (ctx->pc != 0x188AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188AE4u; }
        if (ctx->pc != 0x188AE4u) { return; }
    }
    ctx->pc = 0x188AE4u;
label_188ae4:
    // 0x188ae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188ae8: 0x36060002  ori         $a2, $s0, 0x2
    ctx->pc = 0x188ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x188aec: 0x34058070  ori         $a1, $zero, 0x8070
    ctx->pc = 0x188aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32880);
    // 0x188af0: 0xc046454  jal         func_119150
    ctx->pc = 0x188AF0u;
    SET_GPR_U32(ctx, 31, 0x188AF8u);
    ctx->pc = 0x188AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188AF0u;
            // 0x188af4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188AF8u; }
        if (ctx->pc != 0x188AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188AF8u; }
        if (ctx->pc != 0x188AF8u) { return; }
    }
    ctx->pc = 0x188AF8u;
label_188af8:
    // 0x188af8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x188af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x188afc: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x188afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x188b00: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x188b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x188b04: 0x36060b80  ori         $a2, $s0, 0xB80
    ctx->pc = 0x188b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2944);
    // 0x188b08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188b0c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x188b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x188b10: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x188b10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x188b14: 0xc046454  jal         func_119150
    ctx->pc = 0x188B14u;
    SET_GPR_U32(ctx, 31, 0x188B1Cu);
    ctx->pc = 0x188B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188B14u;
            // 0x188b18: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B1Cu; }
        if (ctx->pc != 0x188B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B1Cu; }
        if (ctx->pc != 0x188B1Cu) { return; }
    }
    ctx->pc = 0x188B1Cu;
label_188b1c:
    // 0x188b1c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x188b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b20: 0x36060c80  ori         $a2, $s0, 0xC80
    ctx->pc = 0x188b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    // 0x188b24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188b28: 0xc046454  jal         func_119150
    ctx->pc = 0x188B28u;
    SET_GPR_U32(ctx, 31, 0x188B30u);
    ctx->pc = 0x188B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188B28u;
            // 0x188b2c: 0x34058010  ori         $a1, $zero, 0x8010 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B30u; }
        if (ctx->pc != 0x188B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B30u; }
        if (ctx->pc != 0x188B30u) { return; }
    }
    ctx->pc = 0x188B30u;
label_188b30:
    // 0x188b30: 0x36060980  ori         $a2, $s0, 0x980
    ctx->pc = 0x188b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2432);
    // 0x188b34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188b38: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x188b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x188b3c: 0xc046454  jal         func_119150
    ctx->pc = 0x188B3Cu;
    SET_GPR_U32(ctx, 31, 0x188B44u);
    ctx->pc = 0x188B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188B3Cu;
            // 0x188b40: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B44u; }
        if (ctx->pc != 0x188B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B44u; }
        if (ctx->pc != 0x188B44u) { return; }
    }
    ctx->pc = 0x188B44u;
label_188b44:
    // 0x188b44: 0x36060a80  ori         $a2, $s0, 0xA80
    ctx->pc = 0x188b44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2688);
    // 0x188b48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188b4c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x188b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x188b50: 0xc046454  jal         func_119150
    ctx->pc = 0x188B50u;
    SET_GPR_U32(ctx, 31, 0x188B58u);
    ctx->pc = 0x188B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188B50u;
            // 0x188b54: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B58u; }
        if (ctx->pc != 0x188B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188B58u; }
        if (ctx->pc != 0x188B58u) { return; }
    }
    ctx->pc = 0x188B58u;
label_188b58:
    // 0x188b58: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x188b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x188b5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x188b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x188b60: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x188b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x188b64: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x188b64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x188b68: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x188B68u;
    {
        const bool branch_taken_0x188b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B68u;
            // 0x188b6c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b68) {
            ctx->pc = 0x188A9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_188a9c;
        }
    }
    ctx->pc = 0x188B70u;
    // 0x188b70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x188b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188b74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188b84: 0x3e00008  jr          $ra
    ctx->pc = 0x188B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B84u;
            // 0x188b88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188B8Cu;
}
