#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsGet__9CPullItemFPf
// Address: 0x1b90d0 - 0x1b91a8
void IsGet__9CPullItemFPf_0x1b90d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsGet__9CPullItemFPf_0x1b90d0");
#endif

    switch (ctx->pc) {
        case 0x1b9140u: goto label_1b9140;
        case 0x1b9198u: goto label_1b9198;
        default: break;
    }

    ctx->pc = 0x1b90d0u;

    // 0x1b90d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b90d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b90d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b90d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b90d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b90d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b90dc: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x1b90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1b90e0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B90E0u;
    {
        const bool branch_taken_0x1b90e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B90E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B90E0u;
            // 0x1b90e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b90e0) {
            ctx->pc = 0x1B9198u;
            goto label_1b9198;
        }
    }
    ctx->pc = 0x1B90E8u;
    // 0x1b90e8: 0x86030050  lh          $v1, 0x50($s0)
    ctx->pc = 0x1b90e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1b90ec: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B90ECu;
    {
        const bool branch_taken_0x1b90ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b90ec) {
            ctx->pc = 0x1B9198u;
            goto label_1b9198;
        }
    }
    ctx->pc = 0x1B90F4u;
    // 0x1b90f4: 0x86030052  lh          $v1, 0x52($s0)
    ctx->pc = 0x1b90f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x1b90f8: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B90F8u;
    {
        const bool branch_taken_0x1b90f8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b90f8) {
            ctx->pc = 0x1B9108u;
            goto label_1b9108;
        }
    }
    ctx->pc = 0x1B9100u;
    // 0x1b9100: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1B9100u;
    {
        const bool branch_taken_0x1b9100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9100u;
            // 0x1b9104: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9100) {
            ctx->pc = 0x1B919Cu;
            goto label_1b919c;
        }
    }
    ctx->pc = 0x1B9108u;
label_1b9108:
    // 0x1b9108: 0x82040060  lb          $a0, 0x60($s0)
    ctx->pc = 0x1b9108u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b910c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b910cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9110: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9110u;
    {
        const bool branch_taken_0x1b9110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b9110) {
            ctx->pc = 0x1B9124u;
            goto label_1b9124;
        }
    }
    ctx->pc = 0x1B9118u;
    // 0x1b9118: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1b9118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b911c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B911Cu;
    {
        const bool branch_taken_0x1b911c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B9120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B911Cu;
            // 0x1b9120: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b911c) {
            ctx->pc = 0x1B9138u;
            goto label_1b9138;
        }
    }
    ctx->pc = 0x1B9124u;
label_1b9124:
    // 0x1b9124: 0xa6000050  sh          $zero, 0x50($s0)
    ctx->pc = 0x1b9124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9128: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b9128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b912c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B912Cu;
    {
        const bool branch_taken_0x1b912c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B912Cu;
            // 0x1b9130: 0xae03007c  sw          $v1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b912c) {
            ctx->pc = 0x1B9198u;
            goto label_1b9198;
        }
    }
    ctx->pc = 0x1B9134u;
    // 0x1b9134: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b9134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b9138:
    // 0x1b9138: 0xc04c018  jal         func_130060
    ctx->pc = 0x1B9138u;
    SET_GPR_U32(ctx, 31, 0x1B9140u);
    ctx->pc = 0x1B913Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9138u;
            // 0x1b913c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9140u; }
        if (ctx->pc != 0x1B9140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9140u; }
        if (ctx->pc != 0x1B9140u) { return; }
    }
    ctx->pc = 0x1B9140u;
label_1b9140:
    // 0x1b9140: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x1b9140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9144: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1b9144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1b9148: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b914c: 0x0  nop
    ctx->pc = 0x1b914cu;
    // NOP
    // 0x1b9150: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b9150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b9154: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b9154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9158: 0x0  nop
    ctx->pc = 0x1b9158u;
    // NOP
    // 0x1b915c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1B915Cu;
    {
        const bool branch_taken_0x1b915c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b915c) {
            ctx->pc = 0x1B9198u;
            goto label_1b9198;
        }
    }
    ctx->pc = 0x1B9164u;
    // 0x1b9164: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b9164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b9168: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x1b9168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x1b916c: 0xa6000050  sh          $zero, 0x50($s0)
    ctx->pc = 0x1b916cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9170: 0x82040060  lb          $a0, 0x60($s0)
    ctx->pc = 0x1b9170u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b9174: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9174u;
    {
        const bool branch_taken_0x1b9174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b9174) {
            ctx->pc = 0x1B9188u;
            goto label_1b9188;
        }
    }
    ctx->pc = 0x1B917Cu;
    // 0x1b917c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b9180: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9180u;
    {
        const bool branch_taken_0x1b9180 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9180) {
            ctx->pc = 0x1B9198u;
            goto label_1b9198;
        }
    }
    ctx->pc = 0x1B9188u;
label_1b9188:
    // 0x1b9188: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x1b9188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x1b918c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1b918cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b9190: 0xc063818  jal         func_18E060
    ctx->pc = 0x1B9190u;
    SET_GPR_U32(ctx, 31, 0x1B9198u);
    ctx->pc = 0x1B9194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9190u;
            // 0x1b9194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9198u; }
        if (ctx->pc != 0x1B9198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9198u; }
        if (ctx->pc != 0x1B9198u) { return; }
    }
    ctx->pc = 0x1B9198u;
label_1b9198:
    // 0x1b9198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b919c:
    // 0x1b919c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b919cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b91a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B91A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B91A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91A0u;
            // 0x1b91a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B91A8u;
}
