#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMonsterInfo__12CMosBookMenuFP16BASE_MONSTER_TBL
// Address: 0x2be0b0 - 0x2be3b0
void SetMonsterInfo__12CMosBookMenuFP16BASE_MONSTER_TBL_0x2be0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMonsterInfo__12CMosBookMenuFP16BASE_MONSTER_TBL_0x2be0b0");
#endif

    switch (ctx->pc) {
        case 0x2be114u: goto label_2be114;
        case 0x2be12cu: goto label_2be12c;
        case 0x2be134u: goto label_2be134;
        case 0x2be190u: goto label_2be190;
        case 0x2be1c4u: goto label_2be1c4;
        case 0x2be1e0u: goto label_2be1e0;
        case 0x2be1f0u: goto label_2be1f0;
        case 0x2be20cu: goto label_2be20c;
        case 0x2be224u: goto label_2be224;
        case 0x2be24cu: goto label_2be24c;
        case 0x2be2d8u: goto label_2be2d8;
        case 0x2be33cu: goto label_2be33c;
        case 0x2be34cu: goto label_2be34c;
        case 0x2be37cu: goto label_2be37c;
        default: break;
    }

    ctx->pc = 0x2be0b0u;

    // 0x2be0b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2be0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2be0b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2be0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2be0b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2be0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2be0bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2be0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2be0c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2be0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2be0c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2be0c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2be0cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0d0: 0xa08007ec  sb          $zero, 0x7EC($a0)
    ctx->pc = 0x2be0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2028), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be0d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2be0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0d8: 0xa080082c  sb          $zero, 0x82C($a0)
    ctx->pc = 0x2be0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2092), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be0dc: 0xa080086c  sb          $zero, 0x86C($a0)
    ctx->pc = 0x2be0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2156), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be0e0: 0xac800904  sw          $zero, 0x904($a0)
    ctx->pc = 0x2be0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2308), GPR_U32(ctx, 0));
    // 0x2be0e4: 0xac800908  sw          $zero, 0x908($a0)
    ctx->pc = 0x2be0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2312), GPR_U32(ctx, 0));
    // 0x2be0e8: 0xac80090c  sw          $zero, 0x90C($a0)
    ctx->pc = 0x2be0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2316), GPR_U32(ctx, 0));
    // 0x2be0ec: 0xac800910  sw          $zero, 0x910($a0)
    ctx->pc = 0x2be0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2320), GPR_U32(ctx, 0));
    // 0x2be0f0: 0xac800914  sw          $zero, 0x914($a0)
    ctx->pc = 0x2be0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2324), GPR_U32(ctx, 0));
    // 0x2be0f4: 0xa0800918  sb          $zero, 0x918($a0)
    ctx->pc = 0x2be0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2328), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be0f8: 0xa0800939  sb          $zero, 0x939($a0)
    ctx->pc = 0x2be0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2361), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be0fc: 0xa080095a  sb          $zero, 0x95A($a0)
    ctx->pc = 0x2be0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2394), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be100: 0x120000a3  beqz        $s0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2BE100u;
    {
        const bool branch_taken_0x2be100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE100u;
            // 0x2be104: 0xa08008ac  sb          $zero, 0x8AC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2220), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be100) {
            ctx->pc = 0x2BE390u;
            goto label_2be390;
        }
    }
    ctx->pc = 0x2BE108u;
    // 0x2be108: 0x2624082c  addiu       $a0, $s1, 0x82C
    ctx->pc = 0x2be108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2092));
    // 0x2be10c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BE10Cu;
    SET_GPR_U32(ctx, 31, 0x2BE114u);
    ctx->pc = 0x2BE110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE10Cu;
            // 0x2be110: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE114u; }
        if (ctx->pc != 0x2BE114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE114u; }
        if (ctx->pc != 0x2BE114u) { return; }
    }
    ctx->pc = 0x2BE114u;
label_2be114:
    // 0x2be114: 0x820400b0  lb          $a0, 0xB0($s0)
    ctx->pc = 0x2be114u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2be118: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x2be118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2be11c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE11Cu;
    {
        const bool branch_taken_0x2be11c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE11Cu;
            // 0x2be120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be11c) {
            ctx->pc = 0x2BE134u;
            goto label_2be134;
        }
    }
    ctx->pc = 0x2BE124u;
    // 0x2be124: 0xc0b141c  jal         func_2C5070
    ctx->pc = 0x2BE124u;
    SET_GPR_U32(ctx, 31, 0x2BE12Cu);
    ctx->pc = 0x2C5070u;
    if (runtime->hasFunction(0x2C5070u)) {
        auto targetFn = runtime->lookupFunction(0x2C5070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE12Cu; }
        if (ctx->pc != 0x2BE12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapNo__Fi_0x2c5070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE12Cu; }
        if (ctx->pc != 0x2BE12Cu) { return; }
    }
    ctx->pc = 0x2BE12Cu;
label_2be12c:
    // 0x2be12c: 0xc0b4a20  jal         func_2D2880
    ctx->pc = 0x2BE12Cu;
    SET_GPR_U32(ctx, 31, 0x2BE134u);
    ctx->pc = 0x2BE130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE12Cu;
            // 0x2be130: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2880u;
    if (runtime->hasFunction(0x2D2880u)) {
        auto targetFn = runtime->lookupFunction(0x2D2880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE134u; }
        if (ctx->pc != 0x2BE134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapTitle__Fi_0x2d2880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE134u; }
        if (ctx->pc != 0x2BE134u) { return; }
    }
    ctx->pc = 0x2BE134u;
label_2be134:
    // 0x2be134: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2be134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2be138: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2be138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2be13c: 0x24634f30  addiu       $v1, $v1, 0x4F30
    ctx->pc = 0x2be13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20272));
    // 0x2be140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2be140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be144: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2be144u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2be148: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x2be148u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2be14c: 0x78650020  lq          $a1, 0x20($v1)
    ctx->pc = 0x2be14cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2be150: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x2be150u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2be154: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x2be154u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x2be158: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x2be158u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x2be15c: 0x7d050020  sq          $a1, 0x20($t0)
    ctx->pc = 0x2be15cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 5));
    // 0x2be160: 0x7d030030  sq          $v1, 0x30($t0)
    ctx->pc = 0x2be160u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 3));
    // 0x2be164: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2be164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2be168: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE168u;
    {
        const bool branch_taken_0x2be168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2be168) {
            ctx->pc = 0x2BE180u;
            goto label_2be180;
        }
    }
    ctx->pc = 0x2BE170u;
    // 0x2be170: 0x820300b0  lb          $v1, 0xB0($s0)
    ctx->pc = 0x2be170u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2be174: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BE174u;
    {
        const bool branch_taken_0x2be174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2be174) {
            ctx->pc = 0x2BE180u;
            goto label_2be180;
        }
    }
    ctx->pc = 0x2BE17Cu;
    // 0x2be17c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2be17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2be180:
    // 0x2be180: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE180u;
    {
        const bool branch_taken_0x2be180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE180u;
            // 0x2be184: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be180) {
            ctx->pc = 0x2BE190u;
            goto label_2be190;
        }
    }
    ctx->pc = 0x2BE188u;
    // 0x2be188: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BE188u;
    SET_GPR_U32(ctx, 31, 0x2BE190u);
    ctx->pc = 0x2BE18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE188u;
            // 0x2be18c: 0x262407ec  addiu       $a0, $s1, 0x7EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2028));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE190u; }
        if (ctx->pc != 0x2BE190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE190u; }
        if (ctx->pc != 0x2BE190u) { return; }
    }
    ctx->pc = 0x2BE190u;
label_2be190:
    // 0x2be190: 0x82030054  lb          $v1, 0x54($s0)
    ctx->pc = 0x2be190u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2be194: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2be194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2be198: 0x8f858ad0  lw          $a1, -0x7530($gp)
    ctx->pc = 0x2be198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2be19c: 0x24424d30  addiu       $v0, $v0, 0x4D30
    ctx->pc = 0x2be19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19760));
    // 0x2be1a0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2be1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be1a4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2be1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2be1a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2be1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2be1ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2be1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2be1b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be1b4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2be1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2be1b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2be1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be1bc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BE1BCu;
    SET_GPR_U32(ctx, 31, 0x2BE1C4u);
    ctx->pc = 0x2BE1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1BCu;
            // 0x2be1c0: 0x2624086c  addiu       $a0, $s1, 0x86C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1C4u; }
        if (ctx->pc != 0x2BE1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1C4u; }
        if (ctx->pc != 0x2BE1C4u) { return; }
    }
    ctx->pc = 0x2BE1C4u;
label_2be1c4:
    // 0x2be1c4: 0x96020056  lhu         $v0, 0x56($s0)
    ctx->pc = 0x2be1c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2be1c8: 0xae220904  sw          $v0, 0x904($s1)
    ctx->pc = 0x2be1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2308), GPR_U32(ctx, 2));
    // 0x2be1cc: 0x96020058  lhu         $v0, 0x58($s0)
    ctx->pc = 0x2be1ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2be1d0: 0xae220908  sw          $v0, 0x908($s1)
    ctx->pc = 0x2be1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2312), GPR_U32(ctx, 2));
    // 0x2be1d4: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x2be1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2be1d8: 0xc068444  jal         func_1A1110
    ctx->pc = 0x2BE1D8u;
    SET_GPR_U32(ctx, 31, 0x2BE1E0u);
    ctx->pc = 0x2BE1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1D8u;
            // 0x2be1dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1110u;
    if (runtime->hasFunction(0x1A1110u)) {
        auto targetFn = runtime->lookupFunction(0x1A1110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1E0u; }
        if (ctx->pc != 0x2BE1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KillMonsterCount__Fii_0x1a1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1E0u; }
        if (ctx->pc != 0x2BE1E0u) { return; }
    }
    ctx->pc = 0x2BE1E0u;
label_2be1e0:
    // 0x2be1e0: 0xae22090c  sw          $v0, 0x90C($s1)
    ctx->pc = 0x2be1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2316), GPR_U32(ctx, 2));
    // 0x2be1e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2be1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be1e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2be1e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be1ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2be1ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be1f0:
    // 0x2be1f0: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x2be1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2be1f4: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x2be1f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2be1f8: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2be1f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2be1fc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE1FCu;
    {
        const bool branch_taken_0x2be1fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be1fc) {
            ctx->pc = 0x2BE228u;
            goto label_2be228;
        }
    }
    ctx->pc = 0x2BE204u;
    // 0x2be204: 0xc065810  jal         func_196040
    ctx->pc = 0x2BE204u;
    SET_GPR_U32(ctx, 31, 0x2BE20Cu);
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE20Cu; }
        if (ctx->pc != 0x2BE20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE20Cu; }
        if (ctx->pc != 0x2BE20Cu) { return; }
    }
    ctx->pc = 0x2BE20Cu;
label_2be20c:
    // 0x2be20c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be210: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE210u;
    {
        const bool branch_taken_0x2be210 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be210) {
            ctx->pc = 0x2BE228u;
            goto label_2be228;
        }
    }
    ctx->pc = 0x2BE218u;
    // 0x2be218: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x2be218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2be21c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BE21Cu;
    SET_GPR_U32(ctx, 31, 0x2BE224u);
    ctx->pc = 0x2BE220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE21Cu;
            // 0x2be220: 0x24440918  addiu       $a0, $v0, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE224u; }
        if (ctx->pc != 0x2BE224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE224u; }
        if (ctx->pc != 0x2BE224u) { return; }
    }
    ctx->pc = 0x2BE224u;
label_2be224:
    // 0x2be224: 0x26940021  addiu       $s4, $s4, 0x21
    ctx->pc = 0x2be224u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 33));
label_2be228:
    // 0x2be228: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2be228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2be22c: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x2be22cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2be230: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2BE230u;
    {
        const bool branch_taken_0x2be230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE230u;
            // 0x2be234: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be230) {
            ctx->pc = 0x2BE1F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be1f0;
        }
    }
    ctx->pc = 0x2BE238u;
    // 0x2be238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2be238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be23c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2be23cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2be240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be244: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2be244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2be248: 0x24a54f70  addiu       $a1, $a1, 0x4F70
    ctx->pc = 0x2be248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20336));
label_2be24c:
    // 0x2be24c: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x2be24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2be250: 0x2469007c  addiu       $t1, $v1, 0x7C
    ctx->pc = 0x2be250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
    // 0x2be254: 0x8463007c  lh          $v1, 0x7C($v1)
    ctx->pc = 0x2be254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2be258: 0x28630065  slti        $v1, $v1, 0x65
    ctx->pc = 0x2be258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2be25c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE25Cu;
    {
        const bool branch_taken_0x2be25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE25Cu;
            // 0x2be260: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be25c) {
            ctx->pc = 0x2BE274u;
            goto label_2be274;
        }
    }
    ctx->pc = 0x2BE264u;
    // 0x2be264: 0x8e240910  lw          $a0, 0x910($s1)
    ctx->pc = 0x2be264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
    // 0x2be268: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2be268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2be26c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2be26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2be270: 0xae230910  sw          $v1, 0x910($s1)
    ctx->pc = 0x2be270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 3));
label_2be274:
    // 0x2be274: 0x0  nop
    ctx->pc = 0x2be274u;
    // NOP
    // 0x2be278: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x2be278u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2be27c: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x2be27cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x2be280: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE280u;
    {
        const bool branch_taken_0x2be280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE280u;
            // 0x2be284: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be280) {
            ctx->pc = 0x2BE298u;
            goto label_2be298;
        }
    }
    ctx->pc = 0x2BE288u;
    // 0x2be288: 0x8e240914  lw          $a0, 0x914($s1)
    ctx->pc = 0x2be288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
    // 0x2be28c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2be28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2be290: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2be290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2be294: 0xae230914  sw          $v1, 0x914($s1)
    ctx->pc = 0x2be294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2324), GPR_U32(ctx, 3));
label_2be298:
    // 0x2be298: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2be298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2be29c: 0x28c3000c  slti        $v1, $a2, 0xC
    ctx->pc = 0x2be29cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2be2a0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x2be2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2be2a4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2BE2A4u;
    {
        const bool branch_taken_0x2be2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE2A4u;
            // 0x2be2a8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2a4) {
            ctx->pc = 0x2BE24Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be24c;
        }
    }
    ctx->pc = 0x2BE2ACu;
    // 0x2be2ac: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2be2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2be2b0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2be2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2be2b4: 0x2463d1a0  addiu       $v1, $v1, -0x2E60
    ctx->pc = 0x2be2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955424));
    // 0x2be2b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2be2b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2bc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2be2bcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2be2c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2be2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2be2c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2be2c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2cc: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x2be2ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2be2d0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2be2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2be2d4: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2be2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
label_2be2d8:
    // 0x2be2d8: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x2be2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2be2dc: 0x8463006c  lh          $v1, 0x6C($v1)
    ctx->pc = 0x2be2dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2be2e0: 0x28630032  slti        $v1, $v1, 0x32
    ctx->pc = 0x2be2e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2be2e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE2E4u;
    {
        const bool branch_taken_0x2be2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE2E4u;
            // 0x2be2e8: 0x11d1821  addu        $v1, $t0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2e4) {
            ctx->pc = 0x2BE2F8u;
            goto label_2be2f8;
        }
    }
    ctx->pc = 0x2BE2ECu;
    // 0x2be2ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2be2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2be2f0: 0xac6600a0  sw          $a2, 0xA0($v1)
    ctx->pc = 0x2be2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 6));
    // 0x2be2f4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2be2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_2be2f8:
    // 0x2be2f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2be2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2be2fc: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x2be2fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2be300: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2BE300u;
    {
        const bool branch_taken_0x2be300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE300u;
            // 0x2be304: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be300) {
            ctx->pc = 0x2BE2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be2d8;
        }
    }
    ctx->pc = 0x2BE308u;
    // 0x2be308: 0x1a400020  blez        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2BE308u;
    {
        const bool branch_taken_0x2be308 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2be308) {
            ctx->pc = 0x2BE38Cu;
            goto label_2be38c;
        }
    }
    ctx->pc = 0x2BE310u;
    // 0x2be310: 0x8f858ad0  lw          $a1, -0x7530($gp)
    ctx->pc = 0x2be310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2be314: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2be314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2be318: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2be318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2be31c: 0x24634e50  addiu       $v1, $v1, 0x4E50
    ctx->pc = 0x2be31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20048));
    // 0x2be320: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2be320u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2be324: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2be324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2be328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be32c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be330: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2be330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be334: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BE334u;
    SET_GPR_U32(ctx, 31, 0x2BE33Cu);
    ctx->pc = 0x2BE338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE334u;
            // 0x2be338: 0x262408ac  addiu       $a0, $s1, 0x8AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE33Cu; }
        if (ctx->pc != 0x2BE33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE33Cu; }
        if (ctx->pc != 0x2BE33Cu) { return; }
    }
    ctx->pc = 0x2BE33Cu;
label_2be33c:
    // 0x2be33c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2be33cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2be340: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE340u;
    {
        const bool branch_taken_0x2be340 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE340u;
            // 0x2be344: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be340) {
            ctx->pc = 0x2BE38Cu;
            goto label_2be38c;
        }
    }
    ctx->pc = 0x2BE348u;
    // 0x2be348: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2be348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2be34c:
    // 0x2be34c: 0x8f858ad0  lw          $a1, -0x7530($gp)
    ctx->pc = 0x2be34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2be350: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2be350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2be354: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x2be354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2be358: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2be358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2be35c: 0x24634e50  addiu       $v1, $v1, 0x4E50
    ctx->pc = 0x2be35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20048));
    // 0x2be360: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2be360u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2be364: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2be364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2be368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be36c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be370: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2be370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be374: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2BE374u;
    SET_GPR_U32(ctx, 31, 0x2BE37Cu);
    ctx->pc = 0x2BE378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE374u;
            // 0x2be378: 0x262408ac  addiu       $a0, $s1, 0x8AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE37Cu; }
        if (ctx->pc != 0x2BE37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE37Cu; }
        if (ctx->pc != 0x2BE37Cu) { return; }
    }
    ctx->pc = 0x2BE37Cu;
label_2be37c:
    // 0x2be37c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2be37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2be380: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x2be380u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2be384: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2BE384u;
    {
        const bool branch_taken_0x2be384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE384u;
            // 0x2be388: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be384) {
            ctx->pc = 0x2BE34Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be34c;
        }
    }
    ctx->pc = 0x2BE38Cu;
label_2be38c:
    // 0x2be38c: 0x0  nop
    ctx->pc = 0x2be38cu;
    // NOP
label_2be390:
    // 0x2be390: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2be390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be394: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2be394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be398: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2be398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be39c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2be39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be3a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3A8u;
            // 0x2be3ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE3B0u;
}
