#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sinf
// Address: 0x11e908 - 0x11e9f8
void sinf_0x11e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sinf_0x11e908");
#endif

    switch (ctx->pc) {
        case 0x11e940u: goto label_11e940;
        case 0x11e96cu: goto label_11e96c;
        case 0x11e9b0u: goto label_11e9b0;
        case 0x11e9c4u: goto label_11e9c4;
        case 0x11e9d8u: goto label_11e9d8;
        case 0x11e9e8u: goto label_11e9e8;
        default: break;
    }

    ctx->pc = 0x11e908u;

    // 0x11e908: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x11e908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e90c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e914: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11e914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11e918: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11e918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11e91c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x11e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x11e920: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x11e920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x11e924: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x11e924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x11e928: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11e928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11e92c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E92Cu;
    {
        const bool branch_taken_0x11e92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E92Cu;
            // 0x11e930: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e92c) {
            ctx->pc = 0x11E948u;
            goto label_11e948;
        }
    }
    ctx->pc = 0x11E934u;
    // 0x11e934: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11e934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11e938: 0xc04748c  jal         func_11D230
    ctx->pc = 0x11E938u;
    SET_GPR_U32(ctx, 31, 0x11E940u);
    ctx->pc = 0x11E93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E938u;
            // 0x11e93c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D230u;
    if (runtime->hasFunction(0x11D230u)) {
        auto targetFn = runtime->lookupFunction(0x11D230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E940u; }
        if (ctx->pc != 0x11E940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11d230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E940u; }
        if (ctx->pc != 0x11E940u) { return; }
    }
    ctx->pc = 0x11E940u;
label_11e940:
    // 0x11e940: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11E940u;
    {
        const bool branch_taken_0x11e940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E940u;
            // 0x11e944: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e940) {
            ctx->pc = 0x11E9F0u;
            goto label_11e9f0;
        }
    }
    ctx->pc = 0x11E948u;
label_11e948:
    // 0x11e948: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x11e948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x11e94c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e950: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11e950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11e954: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E954u;
    {
        const bool branch_taken_0x11e954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e954) {
            ctx->pc = 0x11E964u;
            goto label_11e964;
        }
    }
    ctx->pc = 0x11E95Cu;
    // 0x11e95c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x11E95Cu;
    {
        const bool branch_taken_0x11e95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E95Cu;
            // 0x11e960: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e95c) {
            ctx->pc = 0x11E9ECu;
            goto label_11e9ec;
        }
    }
    ctx->pc = 0x11E964u;
label_11e964:
    // 0x11e964: 0xc046cb8  jal         func_11B2E0
    ctx->pc = 0x11E964u;
    SET_GPR_U32(ctx, 31, 0x11E96Cu);
    ctx->pc = 0x11E968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E964u;
            // 0x11e968: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B2E0u;
    if (runtime->hasFunction(0x11B2E0u)) {
        auto targetFn = runtime->lookupFunction(0x11B2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E96Cu; }
        if (ctx->pc != 0x11E96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x11b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E96Cu; }
        if (ctx->pc != 0x11E96Cu) { return; }
    }
    ctx->pc = 0x11E96Cu;
label_11e96c:
    // 0x11e96c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x11e96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11e970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e974: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11E974u;
    {
        const bool branch_taken_0x11e974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E974u;
            // 0x11e978: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e974) {
            ctx->pc = 0x11E9B8u;
            goto label_11e9b8;
        }
    }
    ctx->pc = 0x11E97Cu;
    // 0x11e97c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E97Cu;
    {
        const bool branch_taken_0x11e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E97Cu;
            // 0x11e980: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e97c) {
            ctx->pc = 0x11E994u;
            goto label_11e994;
        }
    }
    ctx->pc = 0x11E984u;
    // 0x11e984: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E984u;
    {
        const bool branch_taken_0x11e984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E984u;
            // 0x11e988: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e984) {
            ctx->pc = 0x11E9A4u;
            goto label_11e9a4;
        }
    }
    ctx->pc = 0x11E98Cu;
    // 0x11e98c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11E98Cu;
    {
        const bool branch_taken_0x11e98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e98c) {
            ctx->pc = 0x11E9E0u;
            goto label_11e9e0;
        }
    }
    ctx->pc = 0x11E994u;
label_11e994:
    // 0x11e994: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11E994u;
    {
        const bool branch_taken_0x11e994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E994u;
            // 0x11e998: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e994) {
            ctx->pc = 0x11E9CCu;
            goto label_11e9cc;
        }
    }
    ctx->pc = 0x11E99Cu;
    // 0x11e99c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11E99Cu;
    {
        const bool branch_taken_0x11e99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e99c) {
            ctx->pc = 0x11E9E0u;
            goto label_11e9e0;
        }
    }
    ctx->pc = 0x11E9A4u;
label_11e9a4:
    // 0x11e9a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e9a8: 0xc04748c  jal         func_11D230
    ctx->pc = 0x11E9A8u;
    SET_GPR_U32(ctx, 31, 0x11E9B0u);
    ctx->pc = 0x11E9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9A8u;
            // 0x11e9ac: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D230u;
    if (runtime->hasFunction(0x11D230u)) {
        auto targetFn = runtime->lookupFunction(0x11D230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9B0u; }
        if (ctx->pc != 0x11E9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11d230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9B0u; }
        if (ctx->pc != 0x11E9B0u) { return; }
    }
    ctx->pc = 0x11E9B0u;
label_11e9b0:
    // 0x11e9b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11E9B0u;
    {
        const bool branch_taken_0x11e9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9B0u;
            // 0x11e9b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9b0) {
            ctx->pc = 0x11E9F0u;
            goto label_11e9f0;
        }
    }
    ctx->pc = 0x11E9B8u;
label_11e9b8:
    // 0x11e9b8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11e9bc: 0xc0471e2  jal         func_11C788
    ctx->pc = 0x11E9BCu;
    SET_GPR_U32(ctx, 31, 0x11E9C4u);
    ctx->pc = 0x11E9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9BCu;
            // 0x11e9c0: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C788u;
    if (runtime->hasFunction(0x11C788u)) {
        auto targetFn = runtime->lookupFunction(0x11C788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9C4u; }
        if (ctx->pc != 0x11E9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11c788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9C4u; }
        if (ctx->pc != 0x11E9C4u) { return; }
    }
    ctx->pc = 0x11E9C4u;
label_11e9c4:
    // 0x11e9c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11E9C4u;
    {
        const bool branch_taken_0x11e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9C4u;
            // 0x11e9c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9c4) {
            ctx->pc = 0x11E9F0u;
            goto label_11e9f0;
        }
    }
    ctx->pc = 0x11E9CCu;
label_11e9cc:
    // 0x11e9cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e9d0: 0xc04748c  jal         func_11D230
    ctx->pc = 0x11E9D0u;
    SET_GPR_U32(ctx, 31, 0x11E9D8u);
    ctx->pc = 0x11E9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9D0u;
            // 0x11e9d4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D230u;
    if (runtime->hasFunction(0x11D230u)) {
        auto targetFn = runtime->lookupFunction(0x11D230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9D8u; }
        if (ctx->pc != 0x11E9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11d230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9D8u; }
        if (ctx->pc != 0x11E9D8u) { return; }
    }
    ctx->pc = 0x11E9D8u;
label_11e9d8:
    // 0x11e9d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E9D8u;
    {
        const bool branch_taken_0x11e9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9D8u;
            // 0x11e9dc: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9d8) {
            ctx->pc = 0x11E9ECu;
            goto label_11e9ec;
        }
    }
    ctx->pc = 0x11E9E0u;
label_11e9e0:
    // 0x11e9e0: 0xc0471e2  jal         func_11C788
    ctx->pc = 0x11E9E0u;
    SET_GPR_U32(ctx, 31, 0x11E9E8u);
    ctx->pc = 0x11E9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9E0u;
            // 0x11e9e4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C788u;
    if (runtime->hasFunction(0x11C788u)) {
        auto targetFn = runtime->lookupFunction(0x11C788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9E8u; }
        if (ctx->pc != 0x11E9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11c788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9E8u; }
        if (ctx->pc != 0x11E9E8u) { return; }
    }
    ctx->pc = 0x11E9E8u;
label_11e9e8:
    // 0x11e9e8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11e9e8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11e9ec:
    // 0x11e9ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11e9f0:
    // 0x11e9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9F0u;
            // 0x11e9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E9F8u;
}
