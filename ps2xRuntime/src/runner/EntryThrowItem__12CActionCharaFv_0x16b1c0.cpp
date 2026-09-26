#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryThrowItem__12CActionCharaFv
// Address: 0x16b1c0 - 0x16b3bc
void EntryThrowItem__12CActionCharaFv_0x16b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryThrowItem__12CActionCharaFv_0x16b1c0");
#endif

    switch (ctx->pc) {
        case 0x16b1e0u: goto label_16b1e0;
        case 0x16b1ecu: goto label_16b1ec;
        case 0x16b25cu: goto label_16b25c;
        case 0x16b2b4u: goto label_16b2b4;
        case 0x16b2ccu: goto label_16b2cc;
        case 0x16b2e8u: goto label_16b2e8;
        case 0x16b300u: goto label_16b300;
        case 0x16b33cu: goto label_16b33c;
        case 0x16b358u: goto label_16b358;
        case 0x16b368u: goto label_16b368;
        case 0x16b370u: goto label_16b370;
        case 0x16b388u: goto label_16b388;
        default: break;
    }

    ctx->pc = 0x16b1c0u;

    // 0x16b1c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16b1c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16b1c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16b1cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b1d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16b1d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b1d8: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x16B1D8u;
    SET_GPR_U32(ctx, 31, 0x16B1E0u);
    ctx->pc = 0x16B1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1D8u;
            // 0x16b1dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1E0u; }
        if (ctx->pc != 0x16B1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1E0u; }
        if (ctx->pc != 0x16B1E0u) { return; }
    }
    ctx->pc = 0x16B1E0u;
label_16b1e0:
    // 0x16b1e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1e4: 0xc067ce0  jal         func_19F380
    ctx->pc = 0x16B1E4u;
    SET_GPR_U32(ctx, 31, 0x16B1ECu);
    ctx->pc = 0x16B1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1E4u;
            // 0x16b1e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F380u;
    if (runtime->hasFunction(0x19F380u)) {
        auto targetFn = runtime->lookupFunction(0x19F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1ECu; }
        if (ctx->pc != 0x16B1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveItemInfo__16CBattleCharaInfoFi_0x19f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1ECu; }
        if (ctx->pc != 0x16B1ECu) { return; }
    }
    ctx->pc = 0x16B1ECu;
label_16b1ec:
    // 0x16b1ec: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x16b1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x16b1f0: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x16b1f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x16b1f4: 0x8c2bf6ec  lw          $t3, -0x914($at)
    ctx->pc = 0x16b1f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964972)));
    // 0x16b1f8: 0x25294ba0  addiu       $t1, $t1, 0x4BA0
    ctx->pc = 0x16b1f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19360));
    // 0x16b1fc: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x16b1fcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x16b200: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x16b200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16b204: 0x79260010  lq          $a2, 0x10($t1)
    ctx->pc = 0x16b204u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x16b208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16b208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b20c: 0x79250020  lq          $a1, 0x20($t1)
    ctx->pc = 0x16b20cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x16b210: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x16b210u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b214: 0x79240030  lq          $a0, 0x30($t1)
    ctx->pc = 0x16b214u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x16b218: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b21c: 0xb50c0  sll         $t2, $t3, 3
    ctx->pc = 0x16b21cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x16b220: 0x14b5821  addu        $t3, $t2, $t3
    ctx->pc = 0x16b220u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x16b224: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x16b224u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x16b228: 0x14b5023  subu        $t2, $t2, $t3
    ctx->pc = 0x16b228u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x16b22c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x16b22cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x16b230: 0x4a8021  addu        $s0, $v0, $t2
    ctx->pc = 0x16b230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x16b234: 0x86120002  lh          $s2, 0x2($s0)
    ctx->pc = 0x16b234u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16b238: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x16b238u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x16b23c: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x16b23cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x16b240: 0x7d050020  sq          $a1, 0x20($t0)
    ctx->pc = 0x16b240u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 5));
    // 0x16b244: 0x7d040030  sq          $a0, 0x30($t0)
    ctx->pc = 0x16b244u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 4));
    // 0x16b248: 0xdd220040  ld          $v0, 0x40($t1)
    ctx->pc = 0x16b248u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x16b24c: 0xc5200048  lwc1        $f0, 0x48($t1)
    ctx->pc = 0x16b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b250: 0xfd020040  sd          $v0, 0x40($t0)
    ctx->pc = 0x16b250u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 64), GPR_U64(ctx, 2));
    // 0x16b254: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16B254u;
    {
        const bool branch_taken_0x16b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B254u;
            // 0x16b258: 0xe5000048  swc1        $f0, 0x48($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b254) {
            ctx->pc = 0x16B26Cu;
            goto label_16b26c;
        }
    }
    ctx->pc = 0x16B25Cu;
label_16b25c:
    // 0x16b25c: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B25Cu;
    {
        const bool branch_taken_0x16b25c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b25c) {
            ctx->pc = 0x16B280u;
            goto label_16b280;
        }
    }
    ctx->pc = 0x16B264u;
    // 0x16b264: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x16b264u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x16b268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16b268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16b26c:
    // 0x16b26c: 0x0  nop
    ctx->pc = 0x16b26cu;
    // NOP
    // 0x16b270: 0x19d1021  addu        $v0, $t4, $sp
    ctx->pc = 0x16b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x16b274: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x16b274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x16b278: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16B278u;
    {
        const bool branch_taken_0x16b278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16b278) {
            ctx->pc = 0x16B25Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b25c;
        }
    }
    ctx->pc = 0x16B280u;
label_16b280:
    // 0x16b280: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16b280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16b284: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x16b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16b288: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x16b288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x16b28c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b290: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B290u;
    {
        const bool branch_taken_0x16b290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16b290) {
            ctx->pc = 0x16B29Cu;
            goto label_16b29c;
        }
    }
    ctx->pc = 0x16B298u;
    // 0x16b298: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16b298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b29c:
    // 0x16b29c: 0x8e6407dc  lw          $a0, 0x7DC($s3)
    ctx->pc = 0x16b29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2012)));
    // 0x16b2a0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16b2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x16b2a4: 0x24a53550  addiu       $a1, $a1, 0x3550
    ctx->pc = 0x16b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13648));
    // 0x16b2a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2ac: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x16B2ACu;
    SET_GPR_U32(ctx, 31, 0x16B2B4u);
    ctx->pc = 0x16B2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2ACu;
            // 0x16b2b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2B4u; }
        if (ctx->pc != 0x16B2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2B4u; }
        if (ctx->pc != 0x16B2B4u) { return; }
    }
    ctx->pc = 0x16B2B4u;
label_16b2b4:
    // 0x16b2b4: 0xa26207e0  sb          $v0, 0x7E0($s3)
    ctx->pc = 0x16b2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2016), (uint8_t)GPR_U32(ctx, 2));
    // 0x16b2b8: 0x826807e0  lb          $t0, 0x7E0($s3)
    ctx->pc = 0x16b2b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2016)));
    // 0x16b2bc: 0x5010005  bgez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B2BCu;
    {
        const bool branch_taken_0x16b2bc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x16B2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2BCu;
            // 0x16b2c0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2bc) {
            ctx->pc = 0x16B2D4u;
            goto label_16b2d4;
        }
    }
    ctx->pc = 0x16B2C4u;
    // 0x16b2c4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x16B2C4u;
    SET_GPR_U32(ctx, 31, 0x16B2CCu);
    ctx->pc = 0x16B2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2C4u;
            // 0x16b2c8: 0x24843560  addiu       $a0, $a0, 0x3560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2CCu; }
        if (ctx->pc != 0x16B2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2CCu; }
        if (ctx->pc != 0x16B2CCu) { return; }
    }
    ctx->pc = 0x16B2CCu;
label_16b2cc:
    // 0x16b2cc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x16B2CCu;
    {
        const bool branch_taken_0x16b2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b2cc) {
            ctx->pc = 0x16B398u;
            goto label_16b398;
        }
    }
    ctx->pc = 0x16B2D4u;
label_16b2d4:
    // 0x16b2d4: 0x8e6407dc  lw          $a0, 0x7DC($s3)
    ctx->pc = 0x16b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2012)));
    // 0x16b2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16b2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b2e0: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x16B2E0u;
    SET_GPR_U32(ctx, 31, 0x16B2E8u);
    ctx->pc = 0x16B2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2E0u;
            // 0x16b2e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2E8u; }
        if (ctx->pc != 0x16B2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B2E8u; }
        if (ctx->pc != 0x16B2E8u) { return; }
    }
    ctx->pc = 0x16B2E8u;
label_16b2e8:
    // 0x16b2e8: 0x826807e0  lb          $t0, 0x7E0($s3)
    ctx->pc = 0x16b2e8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2016)));
    // 0x16b2ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b2f0: 0x8e6407dc  lw          $a0, 0x7DC($s3)
    ctx->pc = 0x16b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2012)));
    // 0x16b2f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16b2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2f8: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x16B2F8u;
    SET_GPR_U32(ctx, 31, 0x16B300u);
    ctx->pc = 0x16B2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B2F8u;
            // 0x16b2fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B300u; }
        if (ctx->pc != 0x16B300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B300u; }
        if (ctx->pc != 0x16B300u) { return; }
    }
    ctx->pc = 0x16B300u;
label_16b300:
    // 0x16b300: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16b300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x16b304: 0x8c23d438  lw          $v1, -0x2BC8($at)
    ctx->pc = 0x16b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956088)));
    // 0x16b308: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x16B308u;
    {
        const bool branch_taken_0x16b308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b308) {
            ctx->pc = 0x16B398u;
            goto label_16b398;
        }
    }
    ctx->pc = 0x16B310u;
    // 0x16b310: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b318: 0x826707e0  lb          $a3, 0x7E0($s3)
    ctx->pc = 0x16b318u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2016)));
    // 0x16b31c: 0x8e6407dc  lw          $a0, 0x7DC($s3)
    ctx->pc = 0x16b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2012)));
    // 0x16b320: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x16b320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x16b324: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x16b324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16b328: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16b328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16b32c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x16b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16b330: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x16b330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x16b334: 0xc0b8a5c  jal         func_2E2970
    ctx->pc = 0x16B334u;
    SET_GPR_U32(ctx, 31, 0x16B33Cu);
    ctx->pc = 0x16B338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B334u;
            // 0x16b338: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2970u;
    if (runtime->hasFunction(0x2E2970u)) {
        auto targetFn = runtime->lookupFunction(0x2E2970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B33Cu; }
        if (ctx->pc != 0x16B33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharacter__16CEffectScriptManFP11CCharacter2ii_0x2e2970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B33Cu; }
        if (ctx->pc != 0x16B33Cu) { return; }
    }
    ctx->pc = 0x16B33Cu;
label_16b33c:
    // 0x16b33c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x16b340: 0x826707e0  lb          $a3, 0x7E0($s3)
    ctx->pc = 0x16b340u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2016)));
    // 0x16b344: 0x8c22d438  lw          $v0, -0x2BC8($at)
    ctx->pc = 0x16b344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956088)));
    // 0x16b348: 0x8e6407dc  lw          $a0, 0x7DC($s3)
    ctx->pc = 0x16b348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2012)));
    // 0x16b34c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b350: 0xc0b8b04  jal         func_2E2C10
    ctx->pc = 0x16B350u;
    SET_GPR_U32(ctx, 31, 0x16B358u);
    ctx->pc = 0x16B354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B350u;
            // 0x16b354: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2C10u;
    if (runtime->hasFunction(0x2E2C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E2C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B358u; }
        if (ctx->pc != 0x16B358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexb__16CEffectScriptManFiii_0x2e2c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B358u; }
        if (ctx->pc != 0x16B358u) { return; }
    }
    ctx->pc = 0x16B358u;
label_16b358:
    // 0x16b358: 0x24030130  addiu       $v1, $zero, 0x130
    ctx->pc = 0x16b358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x16b35c: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x16B35Cu;
    {
        const bool branch_taken_0x16b35c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x16B360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B35Cu;
            // 0x16b360: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b35c) {
            ctx->pc = 0x16B398u;
            goto label_16b398;
        }
    }
    ctx->pc = 0x16B364u;
    // 0x16b364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b368:
    // 0x16b368: 0xc066648  jal         func_199920
    ctx->pc = 0x16B368u;
    SET_GPR_U32(ctx, 31, 0x16B370u);
    ctx->pc = 0x16B36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B368u;
            // 0x16b36c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199920u;
    if (runtime->hasFunction(0x199920u)) {
        auto targetFn = runtime->lookupFunction(0x199920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B370u; }
        if (ctx->pc != 0x16B370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNo__13CGameDataUsedFi_0x199920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B370u; }
        if (ctx->pc != 0x16B370u) { return; }
    }
    ctx->pc = 0x16B370u;
label_16b370:
    // 0x16b370: 0x826807e0  lb          $t0, 0x7E0($s3)
    ctx->pc = 0x16b370u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2016)));
    // 0x16b374: 0x26250002  addiu       $a1, $s1, 0x2
    ctx->pc = 0x16b374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x16b378: 0x8e6407dc  lw          $a0, 0x7DC($s3)
    ctx->pc = 0x16b378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2012)));
    // 0x16b37c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16b37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b380: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x16B380u;
    SET_GPR_U32(ctx, 31, 0x16B388u);
    ctx->pc = 0x16B384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B380u;
            // 0x16b384: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B388u; }
        if (ctx->pc != 0x16B388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B388u; }
        if (ctx->pc != 0x16B388u) { return; }
    }
    ctx->pc = 0x16B388u;
label_16b388:
    // 0x16b388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16b388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16b38c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x16b38cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16b390: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x16B390u;
    {
        const bool branch_taken_0x16b390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B390u;
            // 0x16b394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b390) {
            ctx->pc = 0x16B368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b368;
        }
    }
    ctx->pc = 0x16B398u;
label_16b398:
    // 0x16b398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b39c: 0xa663071c  sh          $v1, 0x71C($s3)
    ctx->pc = 0x16b39cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1820), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b3a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16b3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b3a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16b3a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b3a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b3a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b3ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3B4u;
            // 0x16b3b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B3BCu;
}
