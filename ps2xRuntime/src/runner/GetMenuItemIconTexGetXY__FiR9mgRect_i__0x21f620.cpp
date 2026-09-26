#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuItemIconTexGetXY__FiR9mgRect<i>
// Address: 0x21f620 - 0x21f6d0
void GetMenuItemIconTexGetXY__FiR9mgRect_i__0x21f620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuItemIconTexGetXY__FiR9mgRect_i__0x21f620");
#endif

    switch (ctx->pc) {
        case 0x21f640u: goto label_21f640;
        case 0x21f660u: goto label_21f660;
        default: break;
    }

    ctx->pc = 0x21f620u;

    // 0x21f620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21f620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21f624: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21f628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21f628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21f62c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21f62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21f630: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21f630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21f634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f638: 0xc065820  jal         func_196080
    ctx->pc = 0x21F638u;
    SET_GPR_U32(ctx, 31, 0x21F640u);
    ctx->pc = 0x21F63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F638u;
            // 0x21f63c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196080u;
    if (runtime->hasFunction(0x196080u)) {
        auto targetFn = runtime->lookupFunction(0x196080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F640u; }
        if (ctx->pc != 0x21F640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemIconNo__Fi_0x196080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F640u; }
        if (ctx->pc != 0x21F640u) { return; }
    }
    ctx->pc = 0x21F640u;
label_21f640:
    // 0x21f640: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x21f640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x21f644: 0x1643000a  bne         $s2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21F644u;
    {
        const bool branch_taken_0x21f644 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x21F648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F644u;
            // 0x21f648: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f644) {
            ctx->pc = 0x21F670u;
            goto label_21f670;
        }
    }
    ctx->pc = 0x21F64Cu;
    // 0x21f64c: 0x8f8394a4  lw          $v1, -0x6B5C($gp)
    ctx->pc = 0x21f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x21f650: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F650u;
    {
        const bool branch_taken_0x21f650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f650) {
            ctx->pc = 0x21F670u;
            goto label_21f670;
        }
    }
    ctx->pc = 0x21F658u;
    // 0x21f658: 0xc05831c  jal         func_160C70
    ctx->pc = 0x21F658u;
    SET_GPR_U32(ctx, 31, 0x21F660u);
    ctx->pc = 0x21F65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F658u;
            // 0x21f65c: 0xc46c2f6c  lwc1        $f12, 0x2F6C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C70u;
    if (runtime->hasFunction(0x160C70u)) {
        auto targetFn = runtime->lookupFunction(0x160C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F660u; }
        if (ctx->pc != 0x21F660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBand__Ff_0x160c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F660u; }
        if (ctx->pc != 0x21F660u) { return; }
    }
    ctx->pc = 0x21F660u;
label_21f660:
    // 0x21f660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21f660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21f664: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F664u;
    {
        const bool branch_taken_0x21f664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21F668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F664u;
            // 0x21f668: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f664) {
            ctx->pc = 0x21F674u;
            goto label_21f674;
        }
    }
    ctx->pc = 0x21F66Cu;
    // 0x21f66c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21f66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21f670:
    // 0x21f670: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x21f670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21f674:
    // 0x21f674: 0x32050007  andi        $a1, $s0, 0x7
    ctx->pc = 0x21f674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x21f678: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x21f678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x21f67c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F67Cu;
    {
        const bool branch_taken_0x21f67c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x21F680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F67Cu;
            // 0x21f680: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f67c) {
            ctx->pc = 0x21F690u;
            goto label_21f690;
        }
    }
    ctx->pc = 0x21F684u;
    // 0x21f684: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21F684u;
    {
        const bool branch_taken_0x21f684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f684) {
            ctx->pc = 0x21F690u;
            goto label_21f690;
        }
    }
    ctx->pc = 0x21F68Cu;
    // 0x21f68c: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x21f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_21f690:
    // 0x21f690: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x21f690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21f694: 0x1020c3  sra         $a0, $s0, 3
    ctx->pc = 0x21f694u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 3));
    // 0x21f698: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x21f698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21f69c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F69Cu;
    {
        const bool branch_taken_0x21f69c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x21F6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F69Cu;
            // 0x21f6a0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f69c) {
            ctx->pc = 0x21F6ACu;
            goto label_21f6ac;
        }
    }
    ctx->pc = 0x21F6A4u;
    // 0x21f6a4: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x21f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x21f6a8: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x21f6a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
label_21f6ac:
    // 0x21f6ac: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x21f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21f6b0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x21f6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21f6b4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x21f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x21f6b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21f6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f6bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21f6bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f6c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f6c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f6c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x21F6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F6C8u;
            // 0x21f6cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F6D0u;
}
