#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMsg__7CDC2MesFv
// Address: 0x21e320 - 0x21e3c0
void DrawMsg__7CDC2MesFv_0x21e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMsg__7CDC2MesFv_0x21e320");
#endif

    switch (ctx->pc) {
        case 0x21e374u: goto label_21e374;
        case 0x21e380u: goto label_21e380;
        case 0x21e394u: goto label_21e394;
        default: break;
    }

    ctx->pc = 0x21e320u;

    // 0x21e320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21e324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21e328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e334: 0x8c8321d4  lw          $v1, 0x21D4($a0)
    ctx->pc = 0x21e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8660)));
    // 0x21e338: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x21E338u;
    {
        const bool branch_taken_0x21e338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E338u;
            // 0x21e33c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e338) {
            ctx->pc = 0x21E3A8u;
            goto label_21e3a8;
        }
    }
    ctx->pc = 0x21E340u;
    // 0x21e340: 0x924221e8  lbu         $v0, 0x21E8($s2)
    ctx->pc = 0x21e340u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8680)));
    // 0x21e344: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E344u;
    {
        const bool branch_taken_0x21e344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e344) {
            ctx->pc = 0x21E360u;
            goto label_21e360;
        }
    }
    ctx->pc = 0x21E34Cu;
    // 0x21e34c: 0x8e501af0  lw          $s0, 0x1AF0($s2)
    ctx->pc = 0x21e34cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6896)));
    // 0x21e350: 0x2402fc18  addiu       $v0, $zero, -0x3E8
    ctx->pc = 0x21e350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x21e354: 0x8e511af4  lw          $s1, 0x1AF4($s2)
    ctx->pc = 0x21e354u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6900)));
    // 0x21e358: 0xae421af0  sw          $v0, 0x1AF0($s2)
    ctx->pc = 0x21e358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6896), GPR_U32(ctx, 2));
    // 0x21e35c: 0xae421af4  sw          $v0, 0x1AF4($s2)
    ctx->pc = 0x21e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6900), GPR_U32(ctx, 2));
label_21e360:
    // 0x21e360: 0x924221ea  lbu         $v0, 0x21EA($s2)
    ctx->pc = 0x21e360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8682)));
    // 0x21e364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E364u;
    {
        const bool branch_taken_0x21e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E364u;
            // 0x21e368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e364) {
            ctx->pc = 0x21E378u;
            goto label_21e378;
        }
    }
    ctx->pc = 0x21E36Cu;
    // 0x21e36c: 0xc088050  jal         func_220140
    ctx->pc = 0x21E36Cu;
    SET_GPR_U32(ctx, 31, 0x21E374u);
    ctx->pc = 0x21E370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E36Cu;
            // 0x21e370: 0x264421f0  addiu       $a0, $s2, 0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E374u; }
        if (ctx->pc != 0x21E374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E374u; }
        if (ctx->pc != 0x21E374u) { return; }
    }
    ctx->pc = 0x21E374u;
label_21e374:
    // 0x21e374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e378:
    // 0x21e378: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x21E378u;
    SET_GPR_U32(ctx, 31, 0x21E380u);
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E380u; }
        if (ctx->pc != 0x21E380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E380u; }
        if (ctx->pc != 0x21E380u) { return; }
    }
    ctx->pc = 0x21E380u;
label_21e380:
    // 0x21e380: 0x924321ea  lbu         $v1, 0x21EA($s2)
    ctx->pc = 0x21e380u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8682)));
    // 0x21e384: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E384u;
    {
        const bool branch_taken_0x21e384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e384) {
            ctx->pc = 0x21E394u;
            goto label_21e394;
        }
    }
    ctx->pc = 0x21E38Cu;
    // 0x21e38c: 0xc088070  jal         func_2201C0
    ctx->pc = 0x21E38Cu;
    SET_GPR_U32(ctx, 31, 0x21E394u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E394u; }
        if (ctx->pc != 0x21E394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E394u; }
        if (ctx->pc != 0x21E394u) { return; }
    }
    ctx->pc = 0x21E394u;
label_21e394:
    // 0x21e394: 0x924321e8  lbu         $v1, 0x21E8($s2)
    ctx->pc = 0x21e394u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8680)));
    // 0x21e398: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E398u;
    {
        const bool branch_taken_0x21e398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e398) {
            ctx->pc = 0x21E3A8u;
            goto label_21e3a8;
        }
    }
    ctx->pc = 0x21E3A0u;
    // 0x21e3a0: 0xae501af0  sw          $s0, 0x1AF0($s2)
    ctx->pc = 0x21e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6896), GPR_U32(ctx, 16));
    // 0x21e3a4: 0xae511af4  sw          $s1, 0x1AF4($s2)
    ctx->pc = 0x21e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6900), GPR_U32(ctx, 17));
label_21e3a8:
    // 0x21e3a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21e3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e3ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e3acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e3b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e3b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x21E3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E3B8u;
            // 0x21e3bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E3C0u;
}
