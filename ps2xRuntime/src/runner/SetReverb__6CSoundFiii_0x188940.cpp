#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetReverb__6CSoundFiii
// Address: 0x188940 - 0x188a3c
void SetReverb__6CSoundFiii_0x188940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetReverb__6CSoundFiii_0x188940");
#endif

    switch (ctx->pc) {
        case 0x188974u: goto label_188974;
        case 0x188994u: goto label_188994;
        case 0x1889b8u: goto label_1889b8;
        case 0x1889ccu: goto label_1889cc;
        case 0x1889e8u: goto label_1889e8;
        case 0x1889fcu: goto label_1889fc;
        case 0x188a10u: goto label_188a10;
        case 0x188a24u: goto label_188a24;
        default: break;
    }

    ctx->pc = 0x188940u;

    // 0x188940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x188940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x188944: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188948: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x188948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18894c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188954: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x188954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18895c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18895cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188960: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x188960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188964: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x188964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x188968: 0x34058070  ori         $a1, $zero, 0x8070
    ctx->pc = 0x188968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32880);
    // 0x18896c: 0xc046454  jal         func_119150
    ctx->pc = 0x18896Cu;
    SET_GPR_U32(ctx, 31, 0x188974u);
    ctx->pc = 0x188970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18896Cu;
            // 0x188970: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188974u; }
        if (ctx->pc != 0x188974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188974u; }
        if (ctx->pc != 0x188974u) { return; }
    }
    ctx->pc = 0x188974u;
label_188974:
    // 0x188974: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x188974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x188978: 0x36061d00  ori         $a2, $s0, 0x1D00
    ctx->pc = 0x188978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)7424);
    // 0x18897c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x18897cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x188980: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188984: 0x101440  sll         $v0, $s0, 17
    ctx->pc = 0x188984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 17));
    // 0x188988: 0x34058050  ori         $a1, $zero, 0x8050
    ctx->pc = 0x188988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32848);
    // 0x18898c: 0xc046454  jal         func_119150
    ctx->pc = 0x18898Cu;
    SET_GPR_U32(ctx, 31, 0x188994u);
    ctx->pc = 0x188990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18898Cu;
            // 0x188990: 0x623823  subu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188994u; }
        if (ctx->pc != 0x188994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188994u; }
        if (ctx->pc != 0x188994u) { return; }
    }
    ctx->pc = 0x188994u;
label_188994:
    // 0x188994: 0x36420100  ori         $v0, $s2, 0x100
    ctx->pc = 0x188994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)256);
    // 0x188998: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18899c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x18899cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1889a0: 0x34058130  ori         $a1, $zero, 0x8130
    ctx->pc = 0x1889a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
    // 0x1889a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1889a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889a8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1889a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1889ac: 0xa7a00048  sh          $zero, 0x48($sp)
    ctx->pc = 0x1889acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x1889b0: 0xc046454  jal         func_119150
    ctx->pc = 0x1889B0u;
    SET_GPR_U32(ctx, 31, 0x1889B8u);
    ctx->pc = 0x1889B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1889B0u;
            // 0x1889b4: 0xa7a0004a  sh          $zero, 0x4A($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 74), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889B8u; }
        if (ctx->pc != 0x1889B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889B8u; }
        if (ctx->pc != 0x1889B8u) { return; }
    }
    ctx->pc = 0x1889B8u;
label_1889b8:
    // 0x1889b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1889b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1889bc: 0x36060002  ori         $a2, $s0, 0x2
    ctx->pc = 0x1889bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x1889c0: 0x34058070  ori         $a1, $zero, 0x8070
    ctx->pc = 0x1889c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32880);
    // 0x1889c4: 0xc046454  jal         func_119150
    ctx->pc = 0x1889C4u;
    SET_GPR_U32(ctx, 31, 0x1889CCu);
    ctx->pc = 0x1889C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1889C4u;
            // 0x1889c8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889CCu; }
        if (ctx->pc != 0x1889CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889CCu; }
        if (ctx->pc != 0x1889CCu) { return; }
    }
    ctx->pc = 0x1889CCu;
label_1889cc:
    // 0x1889cc: 0x111200  sll         $v0, $s1, 8
    ctx->pc = 0x1889ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x1889d0: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x1889d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x1889d4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1889d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1889d8: 0x36060b80  ori         $a2, $s0, 0xB80
    ctx->pc = 0x1889d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2944);
    // 0x1889dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1889dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1889e0: 0xc046454  jal         func_119150
    ctx->pc = 0x1889E0u;
    SET_GPR_U32(ctx, 31, 0x1889E8u);
    ctx->pc = 0x1889E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1889E0u;
            // 0x1889e4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889E8u; }
        if (ctx->pc != 0x1889E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889E8u; }
        if (ctx->pc != 0x1889E8u) { return; }
    }
    ctx->pc = 0x1889E8u;
label_1889e8:
    // 0x1889e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1889e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889ec: 0x36060c80  ori         $a2, $s0, 0xC80
    ctx->pc = 0x1889ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    // 0x1889f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1889f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1889f4: 0xc046454  jal         func_119150
    ctx->pc = 0x1889F4u;
    SET_GPR_U32(ctx, 31, 0x1889FCu);
    ctx->pc = 0x1889F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1889F4u;
            // 0x1889f8: 0x34058010  ori         $a1, $zero, 0x8010 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889FCu; }
        if (ctx->pc != 0x1889FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889FCu; }
        if (ctx->pc != 0x1889FCu) { return; }
    }
    ctx->pc = 0x1889FCu;
label_1889fc:
    // 0x1889fc: 0x36060980  ori         $a2, $s0, 0x980
    ctx->pc = 0x1889fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2432);
    // 0x188a00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188a04: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x188a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x188a08: 0xc046454  jal         func_119150
    ctx->pc = 0x188A08u;
    SET_GPR_U32(ctx, 31, 0x188A10u);
    ctx->pc = 0x188A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A08u;
            // 0x188a0c: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A10u; }
        if (ctx->pc != 0x188A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A10u; }
        if (ctx->pc != 0x188A10u) { return; }
    }
    ctx->pc = 0x188A10u;
label_188a10:
    // 0x188a10: 0x36060a80  ori         $a2, $s0, 0xA80
    ctx->pc = 0x188a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2688);
    // 0x188a14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188a18: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x188a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x188a1c: 0xc046454  jal         func_119150
    ctx->pc = 0x188A1Cu;
    SET_GPR_U32(ctx, 31, 0x188A24u);
    ctx->pc = 0x188A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A1Cu;
            // 0x188a20: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A24u; }
        if (ctx->pc != 0x188A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A24u; }
        if (ctx->pc != 0x188A24u) { return; }
    }
    ctx->pc = 0x188A24u;
label_188a24:
    // 0x188a24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x188a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188a34: 0x3e00008  jr          $ra
    ctx->pc = 0x188A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A34u;
            // 0x188a38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188A3Cu;
}
