#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDamageParam__FP8CColPrimi
// Address: 0x1e8980 - 0x1e8adc
void SetDamageParam__FP8CColPrimi_0x1e8980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDamageParam__FP8CColPrimi_0x1e8980");
#endif

    switch (ctx->pc) {
        case 0x1e89acu: goto label_1e89ac;
        case 0x1e8a00u: goto label_1e8a00;
        case 0x1e8a64u: goto label_1e8a64;
        case 0x1e8a78u: goto label_1e8a78;
        case 0x1e8aa0u: goto label_1e8aa0;
        default: break;
    }

    ctx->pc = 0x1e8980u;

    // 0x1e8980: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e8980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e8984: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e8984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e8988: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e8988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e898c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e8990: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e8990u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8994: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e8998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e8998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e899c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e89a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e89a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e89a4: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1E89A4u;
    SET_GPR_U32(ctx, 31, 0x1E89ACu);
    ctx->pc = 0x1E89A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89A4u;
            // 0x1e89a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89ACu; }
        if (ctx->pc != 0x1E89ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89ACu; }
        if (ctx->pc != 0x1E89ACu) { return; }
    }
    ctx->pc = 0x1E89ACu;
label_1e89ac:
    // 0x1e89ac: 0x84530000  lh          $s3, 0x0($v0)
    ctx->pc = 0x1e89acu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e89b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e89b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e89b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e89b8: 0x16630008  bne         $s3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E89B8u;
    {
        const bool branch_taken_0x1e89b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E89BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89B8u;
            // 0x1e89bc: 0x26270034  addiu       $a3, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89b8) {
            ctx->pc = 0x1E89DCu;
            goto label_1e89dc;
        }
    }
    ctx->pc = 0x1E89C0u;
    // 0x1e89c0: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1e89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x1e89c4: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1e89c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1e89c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e89cc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1e89ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1e89d0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1e89d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e89d4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E89D4u;
    {
        const bool branch_taken_0x1e89d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E89D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89D4u;
            // 0x1e89d8: 0xae030088  sw          $v1, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89d4) {
            ctx->pc = 0x1E8AB4u;
            goto label_1e8ab4;
        }
    }
    ctx->pc = 0x1E89DCu;
label_1e89dc:
    // 0x1e89dc: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1e89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x1e89e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e89e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89e4: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1e89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1e89e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e89e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89ec: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x1e89ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e89f0: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x1e89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x1e89f4: 0x84520000  lh          $s2, 0x0($v0)
    ctx->pc = 0x1e89f4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e89f8: 0xc067e84  jal         func_19FA10
    ctx->pc = 0x1E89F8u;
    SET_GPR_U32(ctx, 31, 0x1E8A00u);
    ctx->pc = 0x1E89FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89F8u;
            // 0x1e89fc: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA10u;
    if (runtime->hasFunction(0x19FA10u)) {
        auto targetFn = runtime->lookupFunction(0x19FA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A00u; }
        if (ctx->pc != 0x1E8A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A00u; }
        if (ctx->pc != 0x1E8A00u) { return; }
    }
    ctx->pc = 0x1E8A00u;
label_1e8a00:
    // 0x1e8a00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e8a04: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8A04u;
    {
        const bool branch_taken_0x1e8a04 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e8a04) {
            ctx->pc = 0x1E8A10u;
            goto label_1e8a10;
        }
    }
    ctx->pc = 0x1E8A0Cu;
    // 0x1e8a0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e8a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8a10:
    // 0x1e8a10: 0xae120088  sw          $s2, 0x88($s0)
    ctx->pc = 0x1e8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 18));
    // 0x1e8a14: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x1e8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1e8a18: 0x84620038  lh          $v0, 0x38($v1)
    ctx->pc = 0x1e8a18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1e8a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a20: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e8a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a24: 0xa6020090  sh          $v0, 0x90($s0)
    ctx->pc = 0x1e8a24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8a28: 0x8462003a  lh          $v0, 0x3A($v1)
    ctx->pc = 0x1e8a28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1e8a2c: 0xa6020092  sh          $v0, 0x92($s0)
    ctx->pc = 0x1e8a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8a30: 0x8462003c  lh          $v0, 0x3C($v1)
    ctx->pc = 0x1e8a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1e8a34: 0xa6020094  sh          $v0, 0x94($s0)
    ctx->pc = 0x1e8a34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8a38: 0x8462003e  lh          $v0, 0x3E($v1)
    ctx->pc = 0x1e8a38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x1e8a3c: 0xa6020096  sh          $v0, 0x96($s0)
    ctx->pc = 0x1e8a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8a40: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x1e8a40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1e8a44: 0xa6020098  sh          $v0, 0x98($s0)
    ctx->pc = 0x1e8a44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8a48: 0x84620042  lh          $v0, 0x42($v1)
    ctx->pc = 0x1e8a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x1e8a4c: 0xa602009a  sh          $v0, 0x9A($s0)
    ctx->pc = 0x1e8a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8a50: 0x84620044  lh          $v0, 0x44($v1)
    ctx->pc = 0x1e8a50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1e8a54: 0xa602009c  sh          $v0, 0x9C($s0)
    ctx->pc = 0x1e8a54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8a58: 0x84620046  lh          $v0, 0x46($v1)
    ctx->pc = 0x1e8a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x1e8a5c: 0xc067d20  jal         func_19F480
    ctx->pc = 0x1E8A5Cu;
    SET_GPR_U32(ctx, 31, 0x1E8A64u);
    ctx->pc = 0x1E8A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A5Cu;
            // 0x1e8a60: 0xa602009e  sh          $v0, 0x9E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 158), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F480u;
    if (runtime->hasFunction(0x19F480u)) {
        auto targetFn = runtime->lookupFunction(0x19F480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A64u; }
        if (ctx->pc != 0x1E8A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpecialStatus__16CBattleCharaInfoFi_0x19f480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A64u; }
        if (ctx->pc != 0x1E8A64u) { return; }
    }
    ctx->pc = 0x1E8A64u;
label_1e8a64:
    // 0x1e8a64: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1e8a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e8a68: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8A68u;
    {
        const bool branch_taken_0x1e8a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A68u;
            // 0x1e8a6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a68) {
            ctx->pc = 0x1E8A8Cu;
            goto label_1e8a8c;
        }
    }
    ctx->pc = 0x1E8A70u;
    // 0x1e8a70: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1E8A70u;
    SET_GPR_U32(ctx, 31, 0x1E8A78u);
    ctx->pc = 0x1E8A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A70u;
            // 0x1e8a74: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A78u; }
        if (ctx->pc != 0x1E8A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A78u; }
        if (ctx->pc != 0x1E8A78u) { return; }
    }
    ctx->pc = 0x1E8A78u;
label_1e8a78:
    // 0x1e8a78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8a7c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8A7Cu;
    {
        const bool branch_taken_0x1e8a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E8A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A7Cu;
            // 0x1e8a80: 0x32230008  andi        $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a7c) {
            ctx->pc = 0x1E8A90u;
            goto label_1e8a90;
        }
    }
    ctx->pc = 0x1E8A84u;
    // 0x1e8a84: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e8a88: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x1e8a88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_1e8a8c:
    // 0x1e8a8c: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x1e8a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_1e8a90:
    // 0x1e8a90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8A90u;
    {
        const bool branch_taken_0x1e8a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A90u;
            // 0x1e8a94: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a90) {
            ctx->pc = 0x1E8AB0u;
            goto label_1e8ab0;
        }
    }
    ctx->pc = 0x1E8A98u;
    // 0x1e8a98: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1E8A98u;
    SET_GPR_U32(ctx, 31, 0x1E8AA0u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AA0u; }
        if (ctx->pc != 0x1E8AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8AA0u; }
        if (ctx->pc != 0x1E8AA0u) { return; }
    }
    ctx->pc = 0x1E8AA0u;
label_1e8aa0:
    // 0x1e8aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8aa4: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8AA4u;
    {
        const bool branch_taken_0x1e8aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E8AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AA4u;
            // 0x1e8aa8: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8aa4) {
            ctx->pc = 0x1E8AB0u;
            goto label_1e8ab0;
        }
    }
    ctx->pc = 0x1E8AACu;
    // 0x1e8aac: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x1e8aacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_1e8ab0:
    // 0x1e8ab0: 0xae1100a0  sw          $s1, 0xA0($s0)
    ctx->pc = 0x1e8ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
label_1e8ab4:
    // 0x1e8ab4: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x1e8ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x1e8ab8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e8ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8abc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e8abcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8ac0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e8ac0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8ac4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8ac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AD4u;
            // 0x1e8ad8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8ADCu;
}
