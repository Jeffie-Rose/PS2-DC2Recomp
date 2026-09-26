#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEntryObjectPos__11CCharacter2FiPA4_f
// Address: 0x174fe0 - 0x175080
void GetEntryObjectPos__11CCharacter2FiPA4_f_0x174fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEntryObjectPos__11CCharacter2FiPA4_f_0x174fe0");
#endif

    switch (ctx->pc) {
        case 0x174fe0u: goto label_174fe0;
        case 0x174fe4u: goto label_174fe4;
        case 0x174fe8u: goto label_174fe8;
        case 0x174fecu: goto label_174fec;
        case 0x174ff0u: goto label_174ff0;
        case 0x174ff4u: goto label_174ff4;
        case 0x174ff8u: goto label_174ff8;
        case 0x174ffcu: goto label_174ffc;
        case 0x175000u: goto label_175000;
        case 0x175004u: goto label_175004;
        case 0x175008u: goto label_175008;
        case 0x17500cu: goto label_17500c;
        case 0x175010u: goto label_175010;
        case 0x175014u: goto label_175014;
        case 0x175018u: goto label_175018;
        case 0x17501cu: goto label_17501c;
        case 0x175020u: goto label_175020;
        case 0x175024u: goto label_175024;
        case 0x175028u: goto label_175028;
        case 0x17502cu: goto label_17502c;
        case 0x175030u: goto label_175030;
        case 0x175034u: goto label_175034;
        case 0x175038u: goto label_175038;
        case 0x17503cu: goto label_17503c;
        case 0x175040u: goto label_175040;
        case 0x175044u: goto label_175044;
        case 0x175048u: goto label_175048;
        case 0x17504cu: goto label_17504c;
        case 0x175050u: goto label_175050;
        case 0x175054u: goto label_175054;
        case 0x175058u: goto label_175058;
        case 0x17505cu: goto label_17505c;
        case 0x175060u: goto label_175060;
        case 0x175064u: goto label_175064;
        case 0x175068u: goto label_175068;
        case 0x17506cu: goto label_17506c;
        case 0x175070u: goto label_175070;
        case 0x175074u: goto label_175074;
        case 0x175078u: goto label_175078;
        case 0x17507cu: goto label_17507c;
        default: break;
    }

    ctx->pc = 0x174fe0u;

label_174fe0:
    // 0x174fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_174fe4:
    // 0x174fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_174fe8:
    // 0x174fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_174fec:
    // 0x174fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_174ff0:
    // 0x174ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174ff4:
    // 0x174ff4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_174ff8:
    if (ctx->pc == 0x174FF8u) {
        ctx->pc = 0x174FF8u;
            // 0x174ff8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174FFCu;
        goto label_174ffc;
    }
    ctx->pc = 0x174FF4u;
    {
        const bool branch_taken_0x174ff4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x174FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174FF4u;
            // 0x174ff8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ff4) {
            ctx->pc = 0x175008u;
            goto label_175008;
        }
    }
    ctx->pc = 0x174FFCu;
label_174ffc:
    // 0x174ffc: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x174ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_175000:
    // 0x175000: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_175004:
    if (ctx->pc == 0x175004u) {
        ctx->pc = 0x175004u;
            // 0x175004: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x175008u;
        goto label_175008;
    }
    ctx->pc = 0x175000u;
    {
        const bool branch_taken_0x175000 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x175004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175000u;
            // 0x175004: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175000) {
            ctx->pc = 0x175010u;
            goto label_175010;
        }
    }
    ctx->pc = 0x175008u;
label_175008:
    // 0x175008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17500c:
    // 0x17500c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17500cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_175010:
    // 0x175010: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_175014:
    // 0x175014: 0x8c440138  lw          $a0, 0x138($v0)
    ctx->pc = 0x175014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_175018:
    // 0x175018: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
label_17501c:
    if (ctx->pc == 0x17501Cu) {
        ctx->pc = 0x17501Cu;
            // 0x17501c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175020u;
        goto label_175020;
    }
    ctx->pc = 0x175018u;
    {
        const bool branch_taken_0x175018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175018u;
            // 0x17501c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175018) {
            ctx->pc = 0x175060u;
            goto label_175060;
        }
    }
    ctx->pc = 0x175020u;
label_175020:
    // 0x175020: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x175020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175024:
    // 0x175024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_175028:
    // 0x175028: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x175028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17502c:
    // 0x17502c: 0x320f809  jalr        $t9
label_175030:
    if (ctx->pc == 0x175030u) {
        ctx->pc = 0x175030u;
            // 0x175030: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x175034u;
        goto label_175034;
    }
    ctx->pc = 0x17502Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x175034u);
        ctx->pc = 0x175030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17502Cu;
            // 0x175030: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x175034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175034u; }
            if (ctx->pc != 0x175034u) { return; }
        }
        }
    }
    ctx->pc = 0x175034u;
label_175034:
    // 0x175034: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x175034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175038:
    // 0x175038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17503c:
    // 0x17503c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x17503cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_175040:
    // 0x175040: 0x320f809  jalr        $t9
label_175044:
    if (ctx->pc == 0x175044u) {
        ctx->pc = 0x175044u;
            // 0x175044: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x175048u;
        goto label_175048;
    }
    ctx->pc = 0x175040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x175048u);
        ctx->pc = 0x175044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175040u;
            // 0x175044: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x175048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175048u; }
            if (ctx->pc != 0x175048u) { return; }
        }
        }
    }
    ctx->pc = 0x175048u;
label_175048:
    // 0x175048: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x175048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17504c:
    // 0x17504c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17504cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175050:
    // 0x175050: 0xc04c154  jal         func_130550
label_175054:
    if (ctx->pc == 0x175054u) {
        ctx->pc = 0x175054u;
            // 0x175054: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x175058u;
        goto label_175058;
    }
    ctx->pc = 0x175050u;
    SET_GPR_U32(ctx, 31, 0x175058u);
    ctx->pc = 0x175054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175050u;
            // 0x175054: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130550u;
    if (runtime->hasFunction(0x130550u)) {
        auto targetFn = runtime->lookupFunction(0x130550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175058u; }
        if (ctx->pc != 0x175058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateMatrixPY__FPA4_fPff_0x130550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175058u; }
        if (ctx->pc != 0x175058u) { return; }
    }
    ctx->pc = 0x175058u;
label_175058:
    // 0x175058: 0x10000004  b           . + 4 + (0x4 << 2)
label_17505c:
    if (ctx->pc == 0x17505Cu) {
        ctx->pc = 0x17505Cu;
            // 0x17505c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175060u;
        goto label_175060;
    }
    ctx->pc = 0x175058u;
    {
        const bool branch_taken_0x175058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17505Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175058u;
            // 0x17505c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175058) {
            ctx->pc = 0x17506Cu;
            goto label_17506c;
        }
    }
    ctx->pc = 0x175060u;
label_175060:
    // 0x175060: 0xc04dc0c  jal         func_137030
label_175064:
    if (ctx->pc == 0x175064u) {
        ctx->pc = 0x175068u;
        goto label_175068;
    }
    ctx->pc = 0x175060u;
    SET_GPR_U32(ctx, 31, 0x175068u);
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175068u; }
        if (ctx->pc != 0x175068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175068u; }
        if (ctx->pc != 0x175068u) { return; }
    }
    ctx->pc = 0x175068u;
label_175068:
    // 0x175068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17506c:
    // 0x17506c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17506cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175070:
    // 0x175070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175074:
    // 0x175074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_175078:
    // 0x175078: 0x3e00008  jr          $ra
label_17507c:
    if (ctx->pc == 0x17507Cu) {
        ctx->pc = 0x17507Cu;
            // 0x17507c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x175080u;
        goto label_fallthrough_0x175078;
    }
    ctx->pc = 0x175078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17507Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175078u;
            // 0x17507c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x175078:
    ctx->pc = 0x175080u;
}
