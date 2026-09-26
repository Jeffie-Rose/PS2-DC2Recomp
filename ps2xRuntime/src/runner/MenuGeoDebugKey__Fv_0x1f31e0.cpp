#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoDebugKey__Fv
// Address: 0x1f31e0 - 0x1f33b0
void MenuGeoDebugKey__Fv_0x1f31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoDebugKey__Fv_0x1f31e0");
#endif

    switch (ctx->pc) {
        case 0x1f3204u: goto label_1f3204;
        case 0x1f321cu: goto label_1f321c;
        case 0x1f322cu: goto label_1f322c;
        case 0x1f323cu: goto label_1f323c;
        case 0x1f324cu: goto label_1f324c;
        case 0x1f3258u: goto label_1f3258;
        case 0x1f3268u: goto label_1f3268;
        case 0x1f32a8u: goto label_1f32a8;
        case 0x1f3320u: goto label_1f3320;
        case 0x1f3398u: goto label_1f3398;
        default: break;
    }

    ctx->pc = 0x1f31e0u;

    // 0x1f31e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f31e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f31e4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1f31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1f31e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f31e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f31ec: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1f31ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x1f31f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f31f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f31f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f31f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f31f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f31f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f31fc: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x1F31FCu;
    SET_GPR_U32(ctx, 31, 0x1F3204u);
    ctx->pc = 0x1F3200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F31FCu;
            // 0x1f3200: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3204u; }
        if (ctx->pc != 0x1F3204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3204u; }
        if (ctx->pc != 0x1F3204u) { return; }
    }
    ctx->pc = 0x1F3204u;
label_1f3204:
    // 0x1f3204: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3204u;
    {
        const bool branch_taken_0x1f3204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3204) {
            ctx->pc = 0x1F322Cu;
            goto label_1f322c;
        }
    }
    ctx->pc = 0x1F320Cu;
    // 0x1f320c: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1f320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f3210: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f3210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f3214: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F3214u;
    SET_GPR_U32(ctx, 31, 0x1F321Cu);
    ctx->pc = 0x1F3218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3214u;
            // 0x1f3218: 0x24a589d8  addiu       $a1, $a1, -0x7628 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F321Cu; }
        if (ctx->pc != 0x1F321Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F321Cu; }
        if (ctx->pc != 0x1F321Cu) { return; }
    }
    ctx->pc = 0x1F321Cu;
label_1f321c:
    // 0x1f321c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1f321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1f3220: 0xa3808fd8  sb          $zero, -0x7028($gp)
    ctx->pc = 0x1f3220u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938584), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3224: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1F3224u;
    SET_GPR_U32(ctx, 31, 0x1F322Cu);
    ctx->pc = 0x1F3228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3224u;
            // 0x1f3228: 0xaf808fb4  sw          $zero, -0x704C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F322Cu; }
        if (ctx->pc != 0x1F322Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F322Cu; }
        if (ctx->pc != 0x1F322Cu) { return; }
    }
    ctx->pc = 0x1F322Cu;
label_1f322c:
    // 0x1f322c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1f322cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1f3230: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f3230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3234: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x1F3234u;
    SET_GPR_U32(ctx, 31, 0x1F323Cu);
    ctx->pc = 0x1F3238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3234u;
            // 0x1f3238: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F323Cu; }
        if (ctx->pc != 0x1F323Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F323Cu; }
        if (ctx->pc != 0x1F323Cu) { return; }
    }
    ctx->pc = 0x1F323Cu;
label_1f323c:
    // 0x1f323c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1F323Cu;
    {
        const bool branch_taken_0x1f323c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f323c) {
            ctx->pc = 0x1F3398u;
            goto label_1f3398;
        }
    }
    ctx->pc = 0x1F3244u;
    // 0x1f3244: 0xc08ca98  jal         func_232A60
    ctx->pc = 0x1F3244u;
    SET_GPR_U32(ctx, 31, 0x1F324Cu);
    ctx->pc = 0x232A60u;
    if (runtime->hasFunction(0x232A60u)) {
        auto targetFn = runtime->lookupFunction(0x232A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F324Cu; }
        if (ctx->pc != 0x1F324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetSaveDataDungeon__Fv_0x232a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F324Cu; }
        if (ctx->pc != 0x1F324Cu) { return; }
    }
    ctx->pc = 0x1F324Cu;
label_1f324c:
    // 0x1f324c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f324cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3250: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f3250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f3254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3258:
    // 0x1f3258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f325c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3260: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x1F3260u;
    SET_GPR_U32(ctx, 31, 0x1F3268u);
    ctx->pc = 0x1F3264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3260u;
            // 0x1f3264: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3268u; }
        if (ctx->pc != 0x1F3268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3268u; }
        if (ctx->pc != 0x1F3268u) { return; }
    }
    ctx->pc = 0x1F3268u;
label_1f3268:
    // 0x1f3268: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3268u;
    {
        const bool branch_taken_0x1f3268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3268) {
            ctx->pc = 0x1F327Cu;
            goto label_1f327c;
        }
    }
    ctx->pc = 0x1F3270u;
    // 0x1f3270: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x1f3270u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f3274: 0x34630300  ori         $v1, $v1, 0x300
    ctx->pc = 0x1f3274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)768);
    // 0x1f3278: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x1f3278u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_1f327c:
    // 0x1f327c: 0x0  nop
    ctx->pc = 0x1f327cu;
    // NOP
    // 0x1f3280: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f3280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f3284: 0x2a420028  slti        $v0, $s2, 0x28
    ctx->pc = 0x1f3284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1f3288: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F3288u;
    {
        const bool branch_taken_0x1f3288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3288) {
            ctx->pc = 0x1F3258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f3258;
        }
    }
    ctx->pc = 0x1F3290u;
    // 0x1f3290: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f3290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f3294: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x1f3294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f3298: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F3298u;
    {
        const bool branch_taken_0x1f3298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F329Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3298u;
            // 0x1f329c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3298) {
            ctx->pc = 0x1F3258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f3258;
        }
    }
    ctx->pc = 0x1F32A0u;
    // 0x1f32a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f32a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f32a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f32a8:
    // 0x1f32a8: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f32ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f32acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f32b0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f32b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32b4: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f32b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f32bc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f32bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32c0: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f32c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f32c8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f32c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32cc: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f32d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f32d4: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1f32d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32d8: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f32dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f32e0: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x1f32e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32e4: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f32e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f32ec: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x1f32ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32f0: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f32f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f32f8: 0xa0430006  sb          $v1, 0x6($v0)
    ctx->pc = 0x1f32f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32fc: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f3300: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f3300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f3304: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x1f3304u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3308: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1f3308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1f330c: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1f330cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f3310: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F3310u;
    {
        const bool branch_taken_0x1f3310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3310) {
            ctx->pc = 0x1F32A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f32a8;
        }
    }
    ctx->pc = 0x1F3318u;
    // 0x1f3318: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f3318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f331c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f331cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3320:
    // 0x1f3320: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f3320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f3324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3328: 0xa0440050  sb          $a0, 0x50($v0)
    ctx->pc = 0x1f3328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f332c: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f3330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3334: 0xa0440051  sb          $a0, 0x51($v0)
    ctx->pc = 0x1f3334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 81), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3338: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f3338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f333c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3340: 0xa0440052  sb          $a0, 0x52($v0)
    ctx->pc = 0x1f3340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 82), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3344: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f3344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f3348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f334c: 0xa0440053  sb          $a0, 0x53($v0)
    ctx->pc = 0x1f334cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 83), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3350: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f3350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f3354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3358: 0xa0440054  sb          $a0, 0x54($v0)
    ctx->pc = 0x1f3358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f335c: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f3360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3364: 0xa0440055  sb          $a0, 0x55($v0)
    ctx->pc = 0x1f3364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 85), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3368: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f3368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f336c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f3370: 0xa0440056  sb          $a0, 0x56($v0)
    ctx->pc = 0x1f3370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 86), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3374: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f3374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f3378: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f337c: 0xa0440057  sb          $a0, 0x57($v0)
    ctx->pc = 0x1f337cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 87), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3380: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1f3380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1f3384: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x1f3384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1f3388: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F3388u;
    {
        const bool branch_taken_0x1f3388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3388) {
            ctx->pc = 0x1F3320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f3320;
        }
    }
    ctx->pc = 0x1F3390u;
    // 0x1f3390: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1F3390u;
    SET_GPR_U32(ctx, 31, 0x1F3398u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3398u; }
        if (ctx->pc != 0x1F3398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3398u; }
        if (ctx->pc != 0x1F3398u) { return; }
    }
    ctx->pc = 0x1F3398u;
label_1f3398:
    // 0x1f3398: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f3398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f339c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f339cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f33a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f33a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f33a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f33a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f33a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F33A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F33ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33A8u;
            // 0x1f33ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F33B0u;
}
