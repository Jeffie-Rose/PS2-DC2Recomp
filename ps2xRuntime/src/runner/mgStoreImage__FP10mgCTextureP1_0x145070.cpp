#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgStoreImage__FP10mgCTextureP1
// Address: 0x145070 - 0x14514c
void mgStoreImage__FP10mgCTextureP1_0x145070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgStoreImage__FP10mgCTextureP1_0x145070");
#endif

    switch (ctx->pc) {
        case 0x1450a4u: goto label_1450a4;
        case 0x145104u: goto label_145104;
        case 0x14510cu: goto label_14510c;
        case 0x145118u: goto label_145118;
        case 0x145124u: goto label_145124;
        default: break;
    }

    ctx->pc = 0x145070u;

    // 0x145070: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x145070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x145074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14507c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145080: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145084: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145084u;
    {
        const bool branch_taken_0x145084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x145088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145084u;
            // 0x145088: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145084) {
            ctx->pc = 0x145094u;
            goto label_145094;
        }
    }
    ctx->pc = 0x14508Cu;
    // 0x14508c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14508Cu;
    {
        const bool branch_taken_0x14508c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14508c) {
            ctx->pc = 0x14509Cu;
            goto label_14509c;
        }
    }
    ctx->pc = 0x145094u;
label_145094:
    // 0x145094: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x145094u;
    {
        const bool branch_taken_0x145094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145094u;
            // 0x145098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145094) {
            ctx->pc = 0x145138u;
            goto label_145138;
        }
    }
    ctx->pc = 0x14509Cu;
label_14509c:
    // 0x14509c: 0xc050bd0  jal         func_142F40
    ctx->pc = 0x14509Cu;
    SET_GPR_U32(ctx, 31, 0x1450A4u);
    ctx->pc = 0x142F40u;
    if (runtime->hasFunction(0x142F40u)) {
        auto targetFn = runtime->lookupFunction(0x142F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450A4u; }
        if (ctx->pc != 0x1450A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgWaitFrame__Fv_0x142f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450A4u; }
        if (ctx->pc != 0x1450A4u) { return; }
    }
    ctx->pc = 0x1450A4u;
label_1450a4:
    // 0x1450a4: 0x862a0002  lh          $t2, 0x2($s1)
    ctx->pc = 0x1450a4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1450a8: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1450A8u;
    {
        const bool branch_taken_0x1450a8 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1450ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1450A8u;
            // 0x1450ac: 0xa1183  sra         $v0, $t2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450a8) {
            ctx->pc = 0x1450B8u;
            goto label_1450b8;
        }
    }
    ctx->pc = 0x1450B0u;
    // 0x1450b0: 0x2542003f  addiu       $v0, $t2, 0x3F
    ctx->pc = 0x1450b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 63));
    // 0x1450b4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1450b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1450b8:
    // 0x1450b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1450B8u;
    {
        const bool branch_taken_0x1450b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1450BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1450B8u;
            // 0x1450bc: 0x2343c  dsll32      $a2, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450b8) {
            ctx->pc = 0x1450C8u;
            goto label_1450c8;
        }
    }
    ctx->pc = 0x1450C0u;
    // 0x1450c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1450c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1450c4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1450c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_1450c8:
    // 0x1450c8: 0x96230038  lhu         $v1, 0x38($s1)
    ctx->pc = 0x1450c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1450cc: 0x9622003a  lhu         $v0, 0x3A($s1)
    ctx->pc = 0x1450ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x1450d0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1450d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1450d4: 0x862b0004  lh          $t3, 0x4($s1)
    ctx->pc = 0x1450d4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1450d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1450d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1450dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1450dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1450e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450e4: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1450e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1450e8: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x1450e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1450ec: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1450ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1450f0: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1450f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1450f4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1450f4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1450f8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x1450f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1450fc: 0xc040e26  jal         func_103898
    ctx->pc = 0x1450FCu;
    SET_GPR_U32(ctx, 31, 0x145104u);
    ctx->pc = 0x145100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1450FCu;
            // 0x145100: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103898u;
    if (runtime->hasFunction(0x103898u)) {
        auto targetFn = runtime->lookupFunction(0x103898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145104u; }
        if (ctx->pc != 0x145104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefStoreImage_0x103898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145104u; }
        if (ctx->pc != 0x145104u) { return; }
    }
    ctx->pc = 0x145104u;
label_145104:
    // 0x145104: 0xc0440d8  jal         func_110360
    ctx->pc = 0x145104u;
    SET_GPR_U32(ctx, 31, 0x14510Cu);
    ctx->pc = 0x145108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145104u;
            // 0x145108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14510Cu; }
        if (ctx->pc != 0x14510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14510Cu; }
        if (ctx->pc != 0x14510Cu) { return; }
    }
    ctx->pc = 0x14510Cu;
label_14510c:
    // 0x14510c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14510cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145110: 0xc040ed6  jal         func_103B58
    ctx->pc = 0x145110u;
    SET_GPR_U32(ctx, 31, 0x145118u);
    ctx->pc = 0x145114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145110u;
            // 0x145114: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103B58u;
    if (runtime->hasFunction(0x103B58u)) {
        auto targetFn = runtime->lookupFunction(0x103B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145118u; }
        if (ctx->pc != 0x145118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsExecStoreImage_0x103b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145118u; }
        if (ctx->pc != 0x145118u) { return; }
    }
    ctx->pc = 0x145118u;
label_145118:
    // 0x145118: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x145118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14511c: 0xc040ce6  jal         func_103398
    ctx->pc = 0x14511Cu;
    SET_GPR_U32(ctx, 31, 0x145124u);
    ctx->pc = 0x145120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14511Cu;
            // 0x145120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145124u; }
        if (ctx->pc != 0x145124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145124u; }
        if (ctx->pc != 0x145124u) { return; }
    }
    ctx->pc = 0x145124u;
label_145124:
    // 0x145124: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x145124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x145128: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x145128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14512c: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x14512cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x145130: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x145130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x145134: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x145134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_145138:
    // 0x145138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14513c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14513cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145144: 0x3e00008  jr          $ra
    ctx->pc = 0x145144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145144u;
            // 0x145148: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14514Cu;
}
