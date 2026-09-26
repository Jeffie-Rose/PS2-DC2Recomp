#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddRotationCharaY__FP11CCharacter2f
// Address: 0x250950 - 0x2509c4
void AddRotationCharaY__FP11CCharacter2f_0x250950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddRotationCharaY__FP11CCharacter2f_0x250950");
#endif

    switch (ctx->pc) {
        case 0x250950u: goto label_250950;
        case 0x250954u: goto label_250954;
        case 0x250958u: goto label_250958;
        case 0x25095cu: goto label_25095c;
        case 0x250960u: goto label_250960;
        case 0x250964u: goto label_250964;
        case 0x250968u: goto label_250968;
        case 0x25096cu: goto label_25096c;
        case 0x250970u: goto label_250970;
        case 0x250974u: goto label_250974;
        case 0x250978u: goto label_250978;
        case 0x25097cu: goto label_25097c;
        case 0x250980u: goto label_250980;
        case 0x250984u: goto label_250984;
        case 0x250988u: goto label_250988;
        case 0x25098cu: goto label_25098c;
        case 0x250990u: goto label_250990;
        case 0x250994u: goto label_250994;
        case 0x250998u: goto label_250998;
        case 0x25099cu: goto label_25099c;
        case 0x2509a0u: goto label_2509a0;
        case 0x2509a4u: goto label_2509a4;
        case 0x2509a8u: goto label_2509a8;
        case 0x2509acu: goto label_2509ac;
        case 0x2509b0u: goto label_2509b0;
        case 0x2509b4u: goto label_2509b4;
        case 0x2509b8u: goto label_2509b8;
        case 0x2509bcu: goto label_2509bc;
        case 0x2509c0u: goto label_2509c0;
        default: break;
    }

    ctx->pc = 0x250950u;

label_250950:
    // 0x250950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x250950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_250954:
    // 0x250954: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x250954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_250958:
    // 0x250958: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x250958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25095c:
    // 0x25095c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_250960:
    // 0x250960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x250960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250964:
    // 0x250964: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x250964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_250968:
    // 0x250968: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_25096c:
    if (ctx->pc == 0x25096Cu) {
        ctx->pc = 0x25096Cu;
            // 0x25096c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x250970u;
        goto label_250970;
    }
    ctx->pc = 0x250968u;
    {
        const bool branch_taken_0x250968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25096Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250968u;
            // 0x25096c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250968) {
            ctx->pc = 0x2509ACu;
            goto label_2509ac;
        }
    }
    ctx->pc = 0x250970u;
label_250970:
    // 0x250970: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x250970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_250974:
    // 0x250974: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x250974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_250978:
    // 0x250978: 0x320f809  jalr        $t9
label_25097c:
    if (ctx->pc == 0x25097Cu) {
        ctx->pc = 0x25097Cu;
            // 0x25097c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x250980u;
        goto label_250980;
    }
    ctx->pc = 0x250978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x250980u);
        ctx->pc = 0x25097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250978u;
            // 0x25097c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x250980u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x250980u; }
            if (ctx->pc != 0x250980u) { return; }
        }
        }
    }
    ctx->pc = 0x250980u;
label_250980:
    // 0x250980: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x250980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_250984:
    // 0x250984: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x250984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250988:
    // 0x250988: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x250988u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_25098c:
    // 0x25098c: 0xc04c374  jal         func_130DD0
label_250990:
    if (ctx->pc == 0x250990u) {
        ctx->pc = 0x250990u;
            // 0x250990: 0xe60c0000  swc1        $f12, 0x0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x250994u;
        goto label_250994;
    }
    ctx->pc = 0x25098Cu;
    SET_GPR_U32(ctx, 31, 0x250994u);
    ctx->pc = 0x250990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25098Cu;
            // 0x250990: 0xe60c0000  swc1        $f12, 0x0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250994u; }
        if (ctx->pc != 0x250994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250994u; }
        if (ctx->pc != 0x250994u) { return; }
    }
    ctx->pc = 0x250994u;
label_250994:
    // 0x250994: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x250994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_250998:
    // 0x250998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x250998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25099c:
    // 0x25099c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x25099cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2509a0:
    // 0x2509a0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2509a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2509a4:
    // 0x2509a4: 0x320f809  jalr        $t9
label_2509a8:
    if (ctx->pc == 0x2509A8u) {
        ctx->pc = 0x2509A8u;
            // 0x2509a8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2509ACu;
        goto label_2509ac;
    }
    ctx->pc = 0x2509A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2509ACu);
        ctx->pc = 0x2509A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2509A4u;
            // 0x2509a8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2509ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2509ACu; }
            if (ctx->pc != 0x2509ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2509ACu;
label_2509ac:
    // 0x2509ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2509acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2509b0:
    // 0x2509b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2509b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2509b4:
    // 0x2509b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2509b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2509b8:
    // 0x2509b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2509b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2509bc:
    // 0x2509bc: 0x3e00008  jr          $ra
label_2509c0:
    if (ctx->pc == 0x2509C0u) {
        ctx->pc = 0x2509C0u;
            // 0x2509c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2509C4u;
        goto label_fallthrough_0x2509bc;
    }
    ctx->pc = 0x2509BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2509C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2509BCu;
            // 0x2509c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2509bc:
    ctx->pc = 0x2509C4u;
}
