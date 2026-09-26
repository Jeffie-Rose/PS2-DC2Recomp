#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPosition__10CEditPartsFPf
// Address: 0x1b5930 - 0x1b5990
void GetPosition__10CEditPartsFPf_0x1b5930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPosition__10CEditPartsFPf_0x1b5930");
#endif

    switch (ctx->pc) {
        case 0x1b5930u: goto label_1b5930;
        case 0x1b5934u: goto label_1b5934;
        case 0x1b5938u: goto label_1b5938;
        case 0x1b593cu: goto label_1b593c;
        case 0x1b5940u: goto label_1b5940;
        case 0x1b5944u: goto label_1b5944;
        case 0x1b5948u: goto label_1b5948;
        case 0x1b594cu: goto label_1b594c;
        case 0x1b5950u: goto label_1b5950;
        case 0x1b5954u: goto label_1b5954;
        case 0x1b5958u: goto label_1b5958;
        case 0x1b595cu: goto label_1b595c;
        case 0x1b5960u: goto label_1b5960;
        case 0x1b5964u: goto label_1b5964;
        case 0x1b5968u: goto label_1b5968;
        case 0x1b596cu: goto label_1b596c;
        case 0x1b5970u: goto label_1b5970;
        case 0x1b5974u: goto label_1b5974;
        case 0x1b5978u: goto label_1b5978;
        case 0x1b597cu: goto label_1b597c;
        case 0x1b5980u: goto label_1b5980;
        case 0x1b5984u: goto label_1b5984;
        case 0x1b5988u: goto label_1b5988;
        case 0x1b598cu: goto label_1b598c;
        default: break;
    }

    ctx->pc = 0x1b5930u;

label_1b5930:
    // 0x1b5930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b5934:
    // 0x1b5934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b5938:
    // 0x1b5938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b593c:
    // 0x1b593c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b5940:
    // 0x1b5940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5944:
    // 0x1b5944: 0xc06d664  jal         func_1B5990
label_1b5948:
    if (ctx->pc == 0x1B5948u) {
        ctx->pc = 0x1B5948u;
            // 0x1b5948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B594Cu;
        goto label_1b594c;
    }
    ctx->pc = 0x1B5944u;
    SET_GPR_U32(ctx, 31, 0x1B594Cu);
    ctx->pc = 0x1B5948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5944u;
            // 0x1b5948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5990u;
    if (runtime->hasFunction(0x1B5990u)) {
        auto targetFn = runtime->lookupFunction(0x1B5990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B594Cu; }
        if (ctx->pc != 0x1B594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLocalPos__10CEditPartsFPf_0x1b5990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B594Cu; }
        if (ctx->pc != 0x1B594Cu) { return; }
    }
    ctx->pc = 0x1B594Cu;
label_1b594c:
    // 0x1b594c: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x1b594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_1b5950:
    // 0x1b5950: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1b5954:
    if (ctx->pc == 0x1B5954u) {
        ctx->pc = 0x1B5958u;
        goto label_1b5958;
    }
    ctx->pc = 0x1B5950u;
    {
        const bool branch_taken_0x1b5950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5950) {
            ctx->pc = 0x1B597Cu;
            goto label_1b597c;
        }
    }
    ctx->pc = 0x1B5958u;
label_1b5958:
    // 0x1b5958: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b5958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b595c:
    // 0x1b595c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b595cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b5960:
    // 0x1b5960: 0x320f809  jalr        $t9
label_1b5964:
    if (ctx->pc == 0x1B5964u) {
        ctx->pc = 0x1B5964u;
            // 0x1b5964: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B5968u;
        goto label_1b5968;
    }
    ctx->pc = 0x1B5960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5968u);
        ctx->pc = 0x1B5964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5960u;
            // 0x1b5964: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B5968u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B5968u; }
            if (ctx->pc != 0x1B5968u) { return; }
        }
        }
    }
    ctx->pc = 0x1B5968u;
label_1b5968:
    // 0x1b5968: 0xc06d5fc  jal         func_1B57F0
label_1b596c:
    if (ctx->pc == 0x1B596Cu) {
        ctx->pc = 0x1B596Cu;
            // 0x1b596c: 0xc7ac0034  lwc1        $f12, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B5970u;
        goto label_1b5970;
    }
    ctx->pc = 0x1B5968u;
    SET_GPR_U32(ctx, 31, 0x1B5970u);
    ctx->pc = 0x1B596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5968u;
            // 0x1b596c: 0xc7ac0034  lwc1        $f12, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B57F0u;
    if (runtime->hasFunction(0x1B57F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B57F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5970u; }
        if (ctx->pc != 0x1B5970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StandardPos__Ff_0x1b57f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5970u; }
        if (ctx->pc != 0x1B5970u) { return; }
    }
    ctx->pc = 0x1B5970u;
label_1b5970:
    // 0x1b5970: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5974:
    // 0x1b5974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b5974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b5978:
    // 0x1b5978: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b5978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1b597c:
    // 0x1b597c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b597cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5980:
    // 0x1b5980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5984:
    // 0x1b5984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5988:
    // 0x1b5988: 0x3e00008  jr          $ra
label_1b598c:
    if (ctx->pc == 0x1B598Cu) {
        ctx->pc = 0x1B598Cu;
            // 0x1b598c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B5990u;
        goto label_fallthrough_0x1b5988;
    }
    ctx->pc = 0x1B5988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B598Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5988u;
            // 0x1b598c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b5988:
    ctx->pc = 0x1B5990u;
}
