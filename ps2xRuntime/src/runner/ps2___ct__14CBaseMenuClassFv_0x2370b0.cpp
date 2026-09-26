#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14CBaseMenuClassFv
// Address: 0x2370b0 - 0x2371a4
void ps2___ct__14CBaseMenuClassFv_0x2370b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14CBaseMenuClassFv_0x2370b0");
#endif

    switch (ctx->pc) {
        case 0x2370dcu: goto label_2370dc;
        case 0x237100u: goto label_237100;
        case 0x237134u: goto label_237134;
        case 0x237180u: goto label_237180;
        case 0x237190u: goto label_237190;
        default: break;
    }

    ctx->pc = 0x2370b0u;

    // 0x2370b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2370b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2370b4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2370b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x2370b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2370b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2370bc: 0x24635fc0  addiu       $v1, $v1, 0x5FC0
    ctx->pc = 0x2370bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24512));
    // 0x2370c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2370c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2370c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2370c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2370c8: 0xac83010c  sw          $v1, 0x10C($a0)
    ctx->pc = 0x2370c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 3));
    // 0x2370cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2370ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370d0: 0xac8200e4  sw          $v0, 0xE4($a0)
    ctx->pc = 0x2370d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 2));
    // 0x2370d4: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x2370D4u;
    SET_GPR_U32(ctx, 31, 0x2370DCu);
    ctx->pc = 0x2370D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2370D4u;
            // 0x2370d8: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2370DCu; }
        if (ctx->pc != 0x2370DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2370DCu; }
        if (ctx->pc != 0x2370DCu) { return; }
    }
    ctx->pc = 0x2370DCu;
label_2370dc:
    // 0x2370dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2370dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2370e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2370e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370e4: 0xa60200ee  sh          $v0, 0xEE($s0)
    ctx->pc = 0x2370e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 238), (uint16_t)GPR_U32(ctx, 2));
    // 0x2370e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2370e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370ec: 0xa60000f0  sh          $zero, 0xF0($s0)
    ctx->pc = 0x2370ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 0));
    // 0x2370f0: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x2370f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2370f4: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x2370f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x2370f8: 0xc049c86  jal         func_127218
    ctx->pc = 0x2370F8u;
    SET_GPR_U32(ctx, 31, 0x237100u);
    ctx->pc = 0x2370FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2370F8u;
            // 0x2370fc: 0xa60000ec  sh          $zero, 0xEC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 236), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237100u; }
        if (ctx->pc != 0x237100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237100u; }
        if (ctx->pc != 0x237100u) { return; }
    }
    ctx->pc = 0x237100u;
label_237100:
    // 0x237100: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x237100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x237104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237108: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x237108u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x23710c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237110: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x237110u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x237114: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x237114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x237118: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x237118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x23711c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23711cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237120: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x237120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x237124: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x237124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x237128: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x237128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x23712c: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x23712cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x237130: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_237134:
    // 0x237134: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x237134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x237138: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x237138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x23713c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x23713cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x237140: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x237140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x237144: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x237144u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x237148: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x237148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x23714c: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x23714cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
    // 0x237150: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x237150u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x237154: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x237154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x237158: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x237158u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x23715c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x23715cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x237160: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x237160u;
    {
        const bool branch_taken_0x237160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237160u;
            // 0x237164: 0xacc30034  sw          $v1, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237160) {
            ctx->pc = 0x237134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237134;
        }
    }
    ctx->pc = 0x237168u;
    // 0x237168: 0xa60300f4  sh          $v1, 0xF4($s0)
    ctx->pc = 0x237168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x23716c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237170: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x237170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x237174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237178: 0xc08e768  jal         func_239DA0
    ctx->pc = 0x237178u;
    SET_GPR_U32(ctx, 31, 0x237180u);
    ctx->pc = 0x23717Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237178u;
            // 0x23717c: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239DA0u;
    if (runtime->hasFunction(0x239DA0u)) {
        auto targetFn = runtime->lookupFunction(0x239DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237180u; }
        if (ctx->pc != 0x237180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237180u; }
        if (ctx->pc != 0x237180u) { return; }
    }
    ctx->pc = 0x237180u;
label_237180:
    // 0x237180: 0x260400fc  addiu       $a0, $s0, 0xFC
    ctx->pc = 0x237180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    // 0x237184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237188: 0xc049c86  jal         func_127218
    ctx->pc = 0x237188u;
    SET_GPR_U32(ctx, 31, 0x237190u);
    ctx->pc = 0x23718Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237188u;
            // 0x23718c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237190u; }
        if (ctx->pc != 0x237190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237190u; }
        if (ctx->pc != 0x237190u) { return; }
    }
    ctx->pc = 0x237190u;
label_237190:
    // 0x237190: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x237190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x237198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23719c: 0x3e00008  jr          $ra
    ctx->pc = 0x23719Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2371A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23719Cu;
            // 0x2371a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2371A4u;
}
