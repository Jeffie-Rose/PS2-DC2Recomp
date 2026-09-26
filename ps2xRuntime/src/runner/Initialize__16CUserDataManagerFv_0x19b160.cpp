#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__16CUserDataManagerFv
// Address: 0x19b160 - 0x19b37c
void Initialize__16CUserDataManagerFv_0x19b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__16CUserDataManagerFv_0x19b160");
#endif

    switch (ctx->pc) {
        case 0x19b190u: goto label_19b190;
        case 0x19b1c0u: goto label_19b1c0;
        case 0x19b1ccu: goto label_19b1cc;
        case 0x19b1fcu: goto label_19b1fc;
        case 0x19b204u: goto label_19b204;
        case 0x19b20cu: goto label_19b20c;
        case 0x19b214u: goto label_19b214;
        case 0x19b238u: goto label_19b238;
        case 0x19b29cu: goto label_19b29c;
        case 0x19b2a8u: goto label_19b2a8;
        case 0x19b2ccu: goto label_19b2cc;
        case 0x19b2d4u: goto label_19b2d4;
        case 0x19b2dcu: goto label_19b2dc;
        case 0x19b310u: goto label_19b310;
        case 0x19b318u: goto label_19b318;
        case 0x19b324u: goto label_19b324;
        case 0x19b32cu: goto label_19b32c;
        case 0x19b334u: goto label_19b334;
        case 0x19b33cu: goto label_19b33c;
        default: break;
    }

    ctx->pc = 0x19b160u;

    // 0x19b160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19b160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19b164: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x19b164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x19b168: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19b168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19b16c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b170: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19b170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19b174: 0x344657a0  ori         $a2, $v0, 0x57A0
    ctx->pc = 0x19b174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22432);
    // 0x19b178: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19b17c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19b17cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b180: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b184: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b188: 0xc049c86  jal         func_127218
    ctx->pc = 0x19B188u;
    SET_GPR_U32(ctx, 31, 0x19B190u);
    ctx->pc = 0x19B18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B188u;
            // 0x19b18c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B190u; }
        if (ctx->pc != 0x19B190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B190u; }
        if (ctx->pc != 0x19B190u) { return; }
    }
    ctx->pc = 0x19B190u;
label_19b190:
    // 0x19b190: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b194: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19b194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b198: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x19b198u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x19b19c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1a0: 0xa4204d96  sh          $zero, 0x4D96($at)
    ctx->pc = 0x19b1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19862), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b1a4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b1a8: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x19b1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x19b1ac: 0xa4204d90  sh          $zero, 0x4D90($at)
    ctx->pc = 0x19b1acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19856), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b1b0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b1b4: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x19b1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x19b1b8: 0xc066e68  jal         func_19B9A0
    ctx->pc = 0x19B1B8u;
    SET_GPR_U32(ctx, 31, 0x19B1C0u);
    ctx->pc = 0x19B1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1B8u;
            // 0x19b1bc: 0xa4204d92  sh          $zero, 0x4D92($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19858), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1C0u; }
        if (ctx->pc != 0x19B1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1C0u; }
        if (ctx->pc != 0x19B1C0u) { return; }
    }
    ctx->pc = 0x19B1C0u;
label_19b1c0:
    // 0x19b1c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19b1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1c4: 0xc066ea8  jal         func_19BAA0
    ctx->pc = 0x19B1C4u;
    SET_GPR_U32(ctx, 31, 0x19B1CCu);
    ctx->pc = 0x19B1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1C4u;
            // 0x19b1c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAA0u;
    if (runtime->hasFunction(0x19BAA0u)) {
        auto targetFn = runtime->lookupFunction(0x19BAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1CCu; }
        if (ctx->pc != 0x19B1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableCharaChange__16CUserDataManagerFi_0x19baa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1CCu; }
        if (ctx->pc != 0x19B1CCu) { return; }
    }
    ctx->pc = 0x19B1CCu;
label_19b1cc:
    // 0x19b1cc: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b1d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b1d4: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x19b1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x19b1d8: 0x26844958  addiu       $a0, $s4, 0x4958
    ctx->pc = 0x19b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 18776));
    // 0x19b1dc: 0xa4224d98  sh          $v0, 0x4D98($at)
    ctx->pc = 0x19b1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19864), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b1e0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b1e4: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x19b1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x19b1e8: 0xac204d9c  sw          $zero, 0x4D9C($at)
    ctx->pc = 0x19b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19868), GPR_U32(ctx, 0));
    // 0x19b1ec: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b1f0: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x19b1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x19b1f4: 0xc066858  jal         func_19A160
    ctx->pc = 0x19B1F4u;
    SET_GPR_U32(ctx, 31, 0x19B1FCu);
    ctx->pc = 0x19B1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1F4u;
            // 0x19b1f8: 0xa4204da0  sh          $zero, 0x4DA0($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19872), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A160u;
    if (runtime->hasFunction(0x19A160u)) {
        auto targetFn = runtime->lookupFunction(0x19A160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1FCu; }
        if (ctx->pc != 0x19B1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CFishAquariumFv_0x19a160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1FCu; }
        if (ctx->pc != 0x19B1FCu) { return; }
    }
    ctx->pc = 0x19B1FCu;
label_19b1fc:
    // 0x19b1fc: 0xc07fa20  jal         func_1FE880
    ctx->pc = 0x19B1FCu;
    SET_GPR_U32(ctx, 31, 0x19B204u);
    ctx->pc = 0x19B200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1FCu;
            // 0x19b200: 0x26847f30  addiu       $a0, $s4, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE880u;
    if (runtime->hasFunction(0x1FE880u)) {
        auto targetFn = runtime->lookupFunction(0x1FE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B204u; }
        if (ctx->pc != 0x19B204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CInventUserDataFv_0x1fe880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B204u; }
        if (ctx->pc != 0x19B204u) { return; }
    }
    ctx->pc = 0x19B204u;
label_19b204:
    // 0x19b204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19b204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19b208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b20c:
    // 0x19b20c: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x19B20Cu;
    SET_GPR_U32(ctx, 31, 0x19B214u);
    ctx->pc = 0x19B210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B20Cu;
            // 0x19b210: 0x2912021  addu        $a0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B214u; }
        if (ctx->pc != 0x19B214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B214u; }
        if (ctx->pc != 0x19B214u) { return; }
    }
    ctx->pc = 0x19B214u;
label_19b214:
    // 0x19b214: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b218: 0x2631006c  addiu       $s1, $s1, 0x6C
    ctx->pc = 0x19b218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x19b21c: 0x2a020096  slti        $v0, $s0, 0x96
    ctx->pc = 0x19b21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x19b220: 0x0  nop
    ctx->pc = 0x19b220u;
    // NOP
    // 0x19b224: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19B224u;
    {
        const bool branch_taken_0x19b224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b224) {
            ctx->pc = 0x19B20Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b20c;
        }
    }
    ctx->pc = 0x19B22Cu;
    // 0x19b22c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b234: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19b234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19b238:
    // 0x19b238: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x19b238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x19b23c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x19b23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x19b240: 0xa4a37db0  sh          $v1, 0x7DB0($a1)
    ctx->pc = 0x19b240u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32176), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b244: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x19b244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19b248: 0xa4a07db2  sh          $zero, 0x7DB2($a1)
    ctx->pc = 0x19b248u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32178), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b24c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x19b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x19b250: 0xa4a37dbc  sh          $v1, 0x7DBC($a1)
    ctx->pc = 0x19b250u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32188), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b254: 0xa4a07dbe  sh          $zero, 0x7DBE($a1)
    ctx->pc = 0x19b254u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32190), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b258: 0xa4a37dc8  sh          $v1, 0x7DC8($a1)
    ctx->pc = 0x19b258u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32200), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b25c: 0xa4a07dca  sh          $zero, 0x7DCA($a1)
    ctx->pc = 0x19b25cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32202), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b260: 0xa4a37dd4  sh          $v1, 0x7DD4($a1)
    ctx->pc = 0x19b260u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32212), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b264: 0xa4a07dd6  sh          $zero, 0x7DD6($a1)
    ctx->pc = 0x19b264u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32214), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b268: 0xa4a37de0  sh          $v1, 0x7DE0($a1)
    ctx->pc = 0x19b268u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32224), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b26c: 0xa4a07de2  sh          $zero, 0x7DE2($a1)
    ctx->pc = 0x19b26cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32226), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b270: 0xa4a37dec  sh          $v1, 0x7DEC($a1)
    ctx->pc = 0x19b270u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32236), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b274: 0xa4a07dee  sh          $zero, 0x7DEE($a1)
    ctx->pc = 0x19b274u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32238), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b278: 0xa4a37df8  sh          $v1, 0x7DF8($a1)
    ctx->pc = 0x19b278u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32248), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b27c: 0xa4a07dfa  sh          $zero, 0x7DFA($a1)
    ctx->pc = 0x19b27cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32250), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b280: 0xa4a37e04  sh          $v1, 0x7E04($a1)
    ctx->pc = 0x19b280u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32260), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b284: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19B284u;
    {
        const bool branch_taken_0x19b284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B284u;
            // 0x19b288: 0xa4a07e06  sh          $zero, 0x7E06($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 32262), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b284) {
            ctx->pc = 0x19B238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b238;
        }
    }
    ctx->pc = 0x19B28Cu;
    // 0x19b28c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19b28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19b290: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x19b290u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x19b294: 0xc067b70  jal         func_19EDC0
    ctx->pc = 0x19B294u;
    SET_GPR_U32(ctx, 31, 0x19B29Cu);
    ctx->pc = 0x19B298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B294u;
            // 0x19b298: 0xfc204dc8  sd          $zero, 0x4DC8($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 19912), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EDC0u;
    if (runtime->hasFunction(0x19EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x19EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B29Cu; }
        if (ctx->pc != 0x19B29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LanguageEquipChange__Fv_0x19edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B29Cu; }
        if (ctx->pc != 0x19B29Cu) { return; }
    }
    ctx->pc = 0x19B29Cu;
label_19b29c:
    // 0x19b29c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19b29cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19b2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19b2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b2a8:
    // 0x19b2a8: 0x278280a8  addiu       $v0, $gp, -0x7F58
    ctx->pc = 0x19b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934696));
    // 0x19b2ac: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x19b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x19b2b0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19b2b4: 0x24703f48  addiu       $s0, $v1, 0x3F48
    ctx->pc = 0x19b2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16200));
    // 0x19b2b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19b2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b2bc: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x19b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x19b2c0: 0xe4603f48  swc1        $f0, 0x3F48($v1)
    ctx->pc = 0x19b2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16200), bits); }
    // 0x19b2c4: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x19B2C4u;
    SET_GPR_U32(ctx, 31, 0x19B2CCu);
    ctx->pc = 0x19B2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2C4u;
            // 0x19b2c8: 0xe4603f4c  swc1        $f0, 0x3F4C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16204), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2CCu; }
        if (ctx->pc != 0x19B2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2CCu; }
        if (ctx->pc != 0x19B2CCu) { return; }
    }
    ctx->pc = 0x19B2CCu;
label_19b2cc:
    // 0x19b2cc: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x19B2CCu;
    SET_GPR_U32(ctx, 31, 0x19B2D4u);
    ctx->pc = 0x19B2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2CCu;
            // 0x19b2d0: 0x26040098  addiu       $a0, $s0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2D4u; }
        if (ctx->pc != 0x19B2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2D4u; }
        if (ctx->pc != 0x19B2D4u) { return; }
    }
    ctx->pc = 0x19B2D4u;
label_19b2d4:
    // 0x19b2d4: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x19B2D4u;
    SET_GPR_U32(ctx, 31, 0x19B2DCu);
    ctx->pc = 0x19B2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2D4u;
            // 0x19b2d8: 0x26040104  addiu       $a0, $s0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2DCu; }
        if (ctx->pc != 0x19B2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B2DCu; }
        if (ctx->pc != 0x19B2DCu) { return; }
    }
    ctx->pc = 0x19B2DCu;
label_19b2dc:
    // 0x19b2dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19b2dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19b2e0: 0x2631038c  addiu       $s1, $s1, 0x38C
    ctx->pc = 0x19b2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 908));
    // 0x19b2e4: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x19b2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19b2e8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19B2E8u;
    {
        const bool branch_taken_0x19b2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2E8u;
            // 0x19b2ec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2e8) {
            ctx->pc = 0x19B2A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b2a8;
        }
    }
    ctx->pc = 0x19B2F0u;
    // 0x19b2f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b2f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19b2f8: 0xa6833f52  sh          $v1, 0x3F52($s4)
    ctx->pc = 0x19b2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16210), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b2fc: 0x26844660  addiu       $a0, $s4, 0x4660
    ctx->pc = 0x19b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 18016));
    // 0x19b300: 0xa68242de  sh          $v0, 0x42DE($s4)
    ctx->pc = 0x19b300u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 17118), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b308: 0xc049c86  jal         func_127218
    ctx->pc = 0x19B308u;
    SET_GPR_U32(ctx, 31, 0x19B310u);
    ctx->pc = 0x19B30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B308u;
            // 0x19b30c: 0x24060220  addiu       $a2, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B310u; }
        if (ctx->pc != 0x19B310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B310u; }
        if (ctx->pc != 0x19B310u) { return; }
    }
    ctx->pc = 0x19B310u;
label_19b310:
    // 0x19b310: 0xc067114  jal         func_19C450
    ctx->pc = 0x19B310u;
    SET_GPR_U32(ctx, 31, 0x19B318u);
    ctx->pc = 0x19B314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B310u;
            // 0x19b314: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C450u;
    if (runtime->hasFunction(0x19C450u)) {
        auto targetFn = runtime->lookupFunction(0x19C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B318u; }
        if (ctx->pc != 0x19B318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboNameDefault__16CUserDataManagerFv_0x19c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B318u; }
        if (ctx->pc != 0x19B318u) { return; }
    }
    ctx->pc = 0x19B318u;
label_19b318:
    // 0x19b318: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19b318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b31c: 0xc067108  jal         func_19C420
    ctx->pc = 0x19B31Cu;
    SET_GPR_U32(ctx, 31, 0x19B324u);
    ctx->pc = 0x19B320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B31Cu;
            // 0x19b320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C420u;
    if (runtime->hasFunction(0x19C420u)) {
        auto targetFn = runtime->lookupFunction(0x19C420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B324u; }
        if (ctx->pc != 0x19B324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoboName__16CUserDataManagerFPc_0x19c420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B324u; }
        if (ctx->pc != 0x19B324u) { return; }
    }
    ctx->pc = 0x19B324u;
label_19b324:
    // 0x19b324: 0xc066ad4  jal         func_19AB50
    ctx->pc = 0x19B324u;
    SET_GPR_U32(ctx, 31, 0x19B32Cu);
    ctx->pc = 0x19B328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B324u;
            // 0x19b328: 0x26844eb0  addiu       $a0, $s4, 0x4EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AB50u;
    if (runtime->hasFunction(0x19AB50u)) {
        auto targetFn = runtime->lookupFunction(0x19AB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B32Cu; }
        if (ctx->pc != 0x19B32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMonsterBoxFv_0x19ab50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B32Cu; }
        if (ctx->pc != 0x19B32Cu) { return; }
    }
    ctx->pc = 0x19B32Cu;
label_19b32c:
    // 0x19b32c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19b32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b330: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19b330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b334:
    // 0x19b334: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x19B334u;
    SET_GPR_U32(ctx, 31, 0x19B33Cu);
    ctx->pc = 0x19B338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B334u;
            // 0x19b338: 0x2912021  addu        $a0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B33Cu; }
        if (ctx->pc != 0x19B33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B33Cu; }
        if (ctx->pc != 0x19B33Cu) { return; }
    }
    ctx->pc = 0x19B33Cu;
label_19b33c:
    // 0x19b33c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b340: 0x2631006c  addiu       $s1, $s1, 0x6C
    ctx->pc = 0x19b340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x19b344: 0x2a030096  slti        $v1, $s0, 0x96
    ctx->pc = 0x19b344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x19b348: 0x0  nop
    ctx->pc = 0x19b348u;
    // NOP
    // 0x19b34c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19B34Cu;
    {
        const bool branch_taken_0x19b34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b34c) {
            ctx->pc = 0x19B334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b334;
        }
    }
    ctx->pc = 0x19B354u;
    // 0x19b354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b358: 0xa3838b78  sb          $v1, -0x7488($gp)
    ctx->pc = 0x19b358u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937464), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b35c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19b35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19b360: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19b360u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b364: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19b364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b36c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b374: 0x3e00008  jr          $ra
    ctx->pc = 0x19B374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B374u;
            // 0x19b378: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B37Cu;
}
