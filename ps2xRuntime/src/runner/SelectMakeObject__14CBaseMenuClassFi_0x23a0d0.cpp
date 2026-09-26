#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SelectMakeObject__14CBaseMenuClassFi
// Address: 0x23a0d0 - 0x23a1e8
void SelectMakeObject__14CBaseMenuClassFi_0x23a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SelectMakeObject__14CBaseMenuClassFi_0x23a0d0");
#endif

    switch (ctx->pc) {
        case 0x23a124u: goto label_23a124;
        case 0x23a1ccu: goto label_23a1cc;
        default: break;
    }

    ctx->pc = 0x23a0d0u;

    // 0x23a0d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23a0d4: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x23a0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x23a0d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23a0dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23a0e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23a0e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23a0e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23a0ec: 0x80830108  lb          $v1, 0x108($a0)
    ctx->pc = 0x23a0ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x23a0f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A0F0u;
    {
        const bool branch_taken_0x23a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A0F0u;
            // 0x23a0f4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0f0) {
            ctx->pc = 0x23A100u;
            goto label_23a100;
        }
    }
    ctx->pc = 0x23A0F8u;
    // 0x23a0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a0fc: 0xa2420108  sb          $v0, 0x108($s2)
    ctx->pc = 0x23a0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 264), (uint8_t)GPR_U32(ctx, 2));
label_23a100:
    // 0x23a100: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x23a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x23a104: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A104u;
    {
        const bool branch_taken_0x23a104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a104) {
            ctx->pc = 0x23A110u;
            goto label_23a110;
        }
    }
    ctx->pc = 0x23A10Cu;
    // 0x23a10c: 0xa2400108  sb          $zero, 0x108($s2)
    ctx->pc = 0x23a10cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 264), (uint8_t)GPR_U32(ctx, 0));
label_23a110:
    // 0x23a110: 0x82420108  lb          $v0, 0x108($s2)
    ctx->pc = 0x23a110u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x23a114: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A114u;
    {
        const bool branch_taken_0x23a114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A114u;
            // 0x23a118: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a114) {
            ctx->pc = 0x23A124u;
            goto label_23a124;
        }
    }
    ctx->pc = 0x23A11Cu;
    // 0x23a11c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x23A11Cu;
    SET_GPR_U32(ctx, 31, 0x23A124u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A124u; }
        if (ctx->pc != 0x23A124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A124u; }
        if (ctx->pc != 0x23A124u) { return; }
    }
    ctx->pc = 0x23A124u;
label_23a124:
    // 0x23a124: 0x82420108  lb          $v0, 0x108($s2)
    ctx->pc = 0x23a124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x23a128: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23A128u;
    {
        const bool branch_taken_0x23a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A128u;
            // 0x23a12c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a128) {
            ctx->pc = 0x23A1CCu;
            goto label_23a1cc;
        }
    }
    ctx->pc = 0x23A130u;
    // 0x23a130: 0x8e440100  lw          $a0, 0x100($s2)
    ctx->pc = 0x23a130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x23a134: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x23a134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x23a138: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A138u;
    {
        const bool branch_taken_0x23a138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A138u;
            // 0x23a13c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a138) {
            ctx->pc = 0x23A144u;
            goto label_23a144;
        }
    }
    ctx->pc = 0x23A140u;
    // 0x23a140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23a144:
    // 0x23a144: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x23a144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x23a148: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A148u;
    {
        const bool branch_taken_0x23a148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A148u;
            // 0x23a14c: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a148) {
            ctx->pc = 0x23A154u;
            goto label_23a154;
        }
    }
    ctx->pc = 0x23A150u;
    // 0x23a150: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a154:
    // 0x23a154: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A154u;
    {
        const bool branch_taken_0x23a154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A154u;
            // 0x23a158: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a154) {
            ctx->pc = 0x23A160u;
            goto label_23a160;
        }
    }
    ctx->pc = 0x23A15Cu;
    // 0x23a15c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x23a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_23a160:
    // 0x23a160: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A160u;
    {
        const bool branch_taken_0x23a160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a160) {
            ctx->pc = 0x23A16Cu;
            goto label_23a16c;
        }
    }
    ctx->pc = 0x23A168u;
    // 0x23a168: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x23a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_23a16c:
    // 0x23a16c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A16Cu;
    {
        const bool branch_taken_0x23a16c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x23A170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A16Cu;
            // 0x23a170: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a16c) {
            ctx->pc = 0x23A178u;
            goto label_23a178;
        }
    }
    ctx->pc = 0x23A174u;
    // 0x23a174: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x23a174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23a178:
    // 0x23a178: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A178u;
    {
        const bool branch_taken_0x23a178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a178) {
            ctx->pc = 0x23A184u;
            goto label_23a184;
        }
    }
    ctx->pc = 0x23A180u;
    // 0x23a180: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23a180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a184:
    // 0x23a184: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x23a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x23a188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a18c: 0xae420100  sw          $v0, 0x100($s2)
    ctx->pc = 0x23a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
    // 0x23a190: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x23a190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x23a194: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A194u;
    {
        const bool branch_taken_0x23a194 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A194u;
            // 0x23a198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a194) {
            ctx->pc = 0x23A1A0u;
            goto label_23a1a0;
        }
    }
    ctx->pc = 0x23A19Cu;
    // 0x23a19c: 0xae420100  sw          $v0, 0x100($s2)
    ctx->pc = 0x23a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
label_23a1a0:
    // 0x23a1a0: 0x8643010a  lh          $v1, 0x10A($s2)
    ctx->pc = 0x23a1a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 266)));
    // 0x23a1a4: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x23a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x23a1a8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x23a1a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23a1ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A1ACu;
    {
        const bool branch_taken_0x23a1ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a1ac) {
            ctx->pc = 0x23A1B8u;
            goto label_23a1b8;
        }
    }
    ctx->pc = 0x23A1B4u;
    // 0x23a1b4: 0xae430100  sw          $v1, 0x100($s2)
    ctx->pc = 0x23a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 3));
label_23a1b8:
    // 0x23a1b8: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x23a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x23a1bc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A1BCu;
    {
        const bool branch_taken_0x23a1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A1BCu;
            // 0x23a1c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1bc) {
            ctx->pc = 0x23A1D0u;
            goto label_23a1d0;
        }
    }
    ctx->pc = 0x23A1C4u;
    // 0x23a1c4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x23A1C4u;
    SET_GPR_U32(ctx, 31, 0x23A1CCu);
    ctx->pc = 0x23A1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A1C4u;
            // 0x23a1c8: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A1CCu; }
        if (ctx->pc != 0x23A1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A1CCu; }
        if (ctx->pc != 0x23A1CCu) { return; }
    }
    ctx->pc = 0x23A1CCu;
label_23a1cc:
    // 0x23a1cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a1d0:
    // 0x23a1d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23a1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a1d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a1d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a1dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A1E0u;
            // 0x23a1e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A1E8u;
}
