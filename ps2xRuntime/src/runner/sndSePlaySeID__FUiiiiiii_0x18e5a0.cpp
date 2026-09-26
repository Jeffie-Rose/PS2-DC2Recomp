#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSePlaySeID__FUiiiiiii
// Address: 0x18e5a0 - 0x18e830
void sndSePlaySeID__FUiiiiiii_0x18e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSePlaySeID__FUiiiiiii_0x18e5a0");
#endif

    switch (ctx->pc) {
        case 0x18e5f8u: goto label_18e5f8;
        case 0x18e600u: goto label_18e600;
        case 0x18e60cu: goto label_18e60c;
        case 0x18e6dcu: goto label_18e6dc;
        case 0x18e6ecu: goto label_18e6ec;
        case 0x18e704u: goto label_18e704;
        case 0x18e750u: goto label_18e750;
        case 0x18e764u: goto label_18e764;
        case 0x18e7dcu: goto label_18e7dc;
        default: break;
    }

    ctx->pc = 0x18e5a0u;

    // 0x18e5a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18e5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18e5a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e5a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x18e5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18e5ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18e5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18e5b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18e5b4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x18e5b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18e5bc: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x18e5bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18e5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18e5c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18e5c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18e5cc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18e5ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18e5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18e5d4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x18e5d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e5dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e5e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e5e4: 0xafa800ac  sw          $t0, 0xAC($sp)
    ctx->pc = 0x18e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
    // 0x18e5e8: 0x12c30085  beq         $s6, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x18E5E8u;
    {
        const bool branch_taken_0x18e5e8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x18E5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E5E8u;
            // 0x18e5ec: 0xafa900a8  sw          $t1, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5e8) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E5F0u;
    // 0x18e5f0: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x18E5F0u;
    SET_GPR_U32(ctx, 31, 0x18E5F8u);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E5F8u; }
        if (ctx->pc != 0x18E5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E5F8u; }
        if (ctx->pc != 0x18E5F8u) { return; }
    }
    ctx->pc = 0x18E5F8u;
label_18e5f8:
    // 0x18e5f8: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x18E5F8u;
    SET_GPR_U32(ctx, 31, 0x18E600u);
    ctx->pc = 0x18E5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E5F8u;
            // 0x18e5fc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E600u; }
        if (ctx->pc != 0x18E600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E600u; }
        if (ctx->pc != 0x18E600u) { return; }
    }
    ctx->pc = 0x18E600u;
label_18e600:
    // 0x18e600: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18e600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e604: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18E604u;
    SET_GPR_U32(ctx, 31, 0x18E60Cu);
    ctx->pc = 0x18E608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E604u;
            // 0x18e608: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E60Cu; }
        if (ctx->pc != 0x18E60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E60Cu; }
        if (ctx->pc != 0x18E60Cu) { return; }
    }
    ctx->pc = 0x18E60Cu;
label_18e60c:
    // 0x18e60c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18e60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e610: 0x1220007b  beqz        $s1, . + 4 + (0x7B << 2)
    ctx->pc = 0x18E610u;
    {
        const bool branch_taken_0x18e610 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e610) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E618u;
    // 0x18e618: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E618u;
    {
        const bool branch_taken_0x18e618 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x18E61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E618u;
            // 0x18e61c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e618) {
            ctx->pc = 0x18E630u;
            goto label_18e630;
        }
    }
    ctx->pc = 0x18E620u;
    // 0x18e620: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18e624: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x18e624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e628: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E628u;
    {
        const bool branch_taken_0x18e628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E628u;
            // 0x18e62c: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e628) {
            ctx->pc = 0x18E638u;
            goto label_18e638;
        }
    }
    ctx->pc = 0x18E630u;
label_18e630:
    // 0x18e630: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18E630u;
    {
        const bool branch_taken_0x18e630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e630) {
            ctx->pc = 0x18E648u;
            goto label_18e648;
        }
    }
    ctx->pc = 0x18E638u;
label_18e638:
    // 0x18e638: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x18e638u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18e63c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e640: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18e644: 0x2472000c  addiu       $s2, $v1, 0xC
    ctx->pc = 0x18e644u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_18e648:
    // 0x18e648: 0x1240006d  beqz        $s2, . + 4 + (0x6D << 2)
    ctx->pc = 0x18E648u;
    {
        const bool branch_taken_0x18e648 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e648) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E650u;
    // 0x18e650: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E650u;
    {
        const bool branch_taken_0x18e650 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x18E654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E650u;
            // 0x18e654: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e650) {
            ctx->pc = 0x18E668u;
            goto label_18e668;
        }
    }
    ctx->pc = 0x18E658u;
    // 0x18e658: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x18e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18e65c: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x18e65cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e660: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E660u;
    {
        const bool branch_taken_0x18e660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e660) {
            ctx->pc = 0x18E670u;
            goto label_18e670;
        }
    }
    ctx->pc = 0x18E668u;
label_18e668:
    // 0x18e668: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E668u;
    {
        const bool branch_taken_0x18e668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e668) {
            ctx->pc = 0x18E684u;
            goto label_18e684;
        }
    }
    ctx->pc = 0x18E670u;
label_18e670:
    // 0x18e670: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x18e670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18e674: 0x152040  sll         $a0, $s5, 1
    ctx->pc = 0x18e674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x18e678: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x18e678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x18e67c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18e680: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x18e680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e684:
    // 0x18e684: 0x1260005e  beqz        $s3, . + 4 + (0x5E << 2)
    ctx->pc = 0x18E684u;
    {
        const bool branch_taken_0x18e684 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e684) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E68Cu;
    // 0x18e68c: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E68Cu;
    {
        const bool branch_taken_0x18e68c = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x18e68c) {
            ctx->pc = 0x18E69Cu;
            goto label_18e69c;
        }
    }
    ctx->pc = 0x18E694u;
    // 0x18e694: 0x82740008  lb          $s4, 0x8($s3)
    ctx->pc = 0x18e694u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18e698: 0x0  nop
    ctx->pc = 0x18e698u;
    // NOP
label_18e69c:
    // 0x18e69c: 0x82630004  lb          $v1, 0x4($s3)
    ctx->pc = 0x18e69cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18e6a0: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x18E6A0u;
    {
        const bool branch_taken_0x18e6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6A0u;
            // 0x18e6a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6a0) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E6A8u;
    // 0x18e6a8: 0x1464001c  bne         $v1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18E6A8u;
    {
        const bool branch_taken_0x18e6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x18e6a8) {
            ctx->pc = 0x18E71Cu;
            goto label_18e71c;
        }
    }
    ctx->pc = 0x18E6B0u;
    // 0x18e6b0: 0x8e250210  lw          $a1, 0x210($s1)
    ctx->pc = 0x18e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x18e6b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e6b8: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18E6B8u;
    {
        const bool branch_taken_0x18e6b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x18e6b8) {
            ctx->pc = 0x18E71Cu;
            goto label_18e71c;
        }
    }
    ctx->pc = 0x18E6C0u;
    // 0x18e6c0: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E6C0u;
    {
        const bool branch_taken_0x18e6c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x18E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6C0u;
            // 0x18e6c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6c0) {
            ctx->pc = 0x18E6D0u;
            goto label_18e6d0;
        }
    }
    ctx->pc = 0x18E6C8u;
    // 0x18e6c8: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E6C8u;
    {
        const bool branch_taken_0x18e6c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e6c8) {
            ctx->pc = 0x18E6F4u;
            goto label_18e6f4;
        }
    }
    ctx->pc = 0x18E6D0u;
label_18e6d0:
    // 0x18e6d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18e6d4: 0xc063de8  jal         func_18F7A0
    ctx->pc = 0x18E6D4u;
    SET_GPR_U32(ctx, 31, 0x18E6DCu);
    ctx->pc = 0x18E6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6D4u;
            // 0x18e6d8: 0x82650005  lb          $a1, 0x5($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F7A0u;
    if (runtime->hasFunction(0x18F7A0u)) {
        auto targetFn = runtime->lookupFunction(0x18F7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E6DCu; }
        if (ctx->pc != 0x18E6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSqRePlay__Fii_0x18f7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E6DCu; }
        if (ctx->pc != 0x18E6DCu) { return; }
    }
    ctx->pc = 0x18E6DCu;
label_18e6dc:
    // 0x18e6dc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18e6e0: 0x8e260214  lw          $a2, 0x214($s1)
    ctx->pc = 0x18e6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x18e6e4: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x18E6E4u;
    SET_GPR_U32(ctx, 31, 0x18E6ECu);
    ctx->pc = 0x18E6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6E4u;
            // 0x18e6e8: 0x82650005  lb          $a1, 0x5($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (runtime->hasFunction(0x18F750u)) {
        auto targetFn = runtime->lookupFunction(0x18F750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E6ECu; }
        if (ctx->pc != 0x18E6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSqVol__Fiii_0x18f750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E6ECu; }
        if (ctx->pc != 0x18E6ECu) { return; }
    }
    ctx->pc = 0x18E6ECu;
label_18e6ec:
    // 0x18e6ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E6ECu;
    {
        const bool branch_taken_0x18e6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6ECu;
            // 0x18e6f0: 0xae340214  sw          $s4, 0x214($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6ec) {
            ctx->pc = 0x18E708u;
            goto label_18e708;
        }
    }
    ctx->pc = 0x18E6F4u;
label_18e6f4:
    // 0x18e6f4: 0x82650005  lb          $a1, 0x5($s3)
    ctx->pc = 0x18e6f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x18e6f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18e6fc: 0xc063d98  jal         func_18F660
    ctx->pc = 0x18E6FCu;
    SET_GPR_U32(ctx, 31, 0x18E704u);
    ctx->pc = 0x18E700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6FCu;
            // 0x18e700: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F660u;
    if (runtime->hasFunction(0x18F660u)) {
        auto targetFn = runtime->lookupFunction(0x18F660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E704u; }
        if (ctx->pc != 0x18E704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSqPlay__Fiii_0x18f660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E704u; }
        if (ctx->pc != 0x18E704u) { return; }
    }
    ctx->pc = 0x18E704u;
label_18e704:
    // 0x18e704: 0xae340214  sw          $s4, 0x214($s1)
    ctx->pc = 0x18e704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 20));
label_18e708:
    // 0x18e708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e70c: 0xae230210  sw          $v1, 0x210($s1)
    ctx->pc = 0x18e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 3));
    // 0x18e710: 0x82630005  lb          $v1, 0x5($s3)
    ctx->pc = 0x18e710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x18e714: 0xae23020c  sw          $v1, 0x20C($s1)
    ctx->pc = 0x18e714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 3));
    // 0x18e718: 0xae350218  sw          $s5, 0x218($s1)
    ctx->pc = 0x18e718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 21));
label_18e71c:
    // 0x18e71c: 0x82640004  lb          $a0, 0x4($s3)
    ctx->pc = 0x18e71cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18e720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e724: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18E724u;
    {
        const bool branch_taken_0x18e724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e724) {
            ctx->pc = 0x18E750u;
            goto label_18e750;
        }
    }
    ctx->pc = 0x18E72Cu;
    // 0x18e72c: 0x8fa900ac  lw          $t1, 0xAC($sp)
    ctx->pc = 0x18e72cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x18e730: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x18e730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e734: 0x8faa00a8  lw          $t2, 0xA8($sp)
    ctx->pc = 0x18e734u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x18e738: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e73c: 0x82650005  lb          $a1, 0x5($s3)
    ctx->pc = 0x18e73cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x18e740: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x18e740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e744: 0x82660006  lb          $a2, 0x6($s3)
    ctx->pc = 0x18e744u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x18e748: 0xc063c5c  jal         func_18F170
    ctx->pc = 0x18E748u;
    SET_GPR_U32(ctx, 31, 0x18E750u);
    ctx->pc = 0x18E74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E748u;
            // 0x18e74c: 0x2e0582d  daddu       $t3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F170u;
    if (runtime->hasFunction(0x18F170u)) {
        auto targetFn = runtime->lookupFunction(0x18F170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E750u; }
        if (ctx->pc != 0x18E750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayPrKr__FUiiiiiiii_0x18f170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E750u; }
        if (ctx->pc != 0x18E750u) { return; }
    }
    ctx->pc = 0x18E750u;
label_18e750:
    // 0x18e750: 0x82640004  lb          $a0, 0x4($s3)
    ctx->pc = 0x18e750u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18e754: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18e754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e758: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x18E758u;
    {
        const bool branch_taken_0x18e758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18E75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E758u;
            // 0x18e75c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e758) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E760u;
    // 0x18e760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e764:
    // 0x18e764: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x18e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x18e768: 0x8463021c  lh          $v1, 0x21C($v1)
    ctx->pc = 0x18e768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x18e76c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E76Cu;
    {
        const bool branch_taken_0x18e76c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18E770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E76Cu;
            // 0x18e770: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e76c) {
            ctx->pc = 0x18E780u;
            goto label_18e780;
        }
    }
    ctx->pc = 0x18E774u;
    // 0x18e774: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18e774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18e778: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E778u;
    {
        const bool branch_taken_0x18e778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E778u;
            // 0x18e77c: 0x2471021c  addiu       $s1, $v1, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e778) {
            ctx->pc = 0x18E794u;
            goto label_18e794;
        }
    }
    ctx->pc = 0x18E780u;
label_18e780:
    // 0x18e780: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18e780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18e784: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x18e784u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18e788: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x18E788u;
    {
        const bool branch_taken_0x18e788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E788u;
            // 0x18e78c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e788) {
            ctx->pc = 0x18E764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18e764;
        }
    }
    ctx->pc = 0x18E790u;
    // 0x18e790: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e794:
    // 0x18e794: 0x82640005  lb          $a0, 0x5($s3)
    ctx->pc = 0x18e794u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x18e798: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E798u;
    {
        const bool branch_taken_0x18e798 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E798u;
            // 0x18e79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e798) {
            ctx->pc = 0x18E7B0u;
            goto label_18e7b0;
        }
    }
    ctx->pc = 0x18E7A0u;
    // 0x18e7a0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x18e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x18e7a4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x18e7a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e7a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E7A8u;
    {
        const bool branch_taken_0x18e7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e7a8) {
            ctx->pc = 0x18E7B8u;
            goto label_18e7b8;
        }
    }
    ctx->pc = 0x18E7B0u;
label_18e7b0:
    // 0x18e7b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E7B0u;
    {
        const bool branch_taken_0x18e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e7b0) {
            ctx->pc = 0x18E7C4u;
            goto label_18e7c4;
        }
    }
    ctx->pc = 0x18E7B8u;
label_18e7b8:
    // 0x18e7b8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x18e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x18e7bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18e7c0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x18e7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e7c4:
    // 0x18e7c4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x18E7C4u;
    {
        const bool branch_taken_0x18e7c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e7c4) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E7CCu;
    // 0x18e7cc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x18E7CCu;
    {
        const bool branch_taken_0x18e7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7CCu;
            // 0x18e7d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7cc) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E7D4u;
    // 0x18e7d4: 0xc06407c  jal         func_1901F0
    ctx->pc = 0x18E7D4u;
    SET_GPR_U32(ctx, 31, 0x18E7DCu);
    ctx->pc = 0x18E7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7D4u;
            // 0x18e7d8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1901F0u;
    if (runtime->hasFunction(0x1901F0u)) {
        auto targetFn = runtime->lookupFunction(0x1901F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7DCu; }
        if (ctx->pc != 0x18E7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaySeSeq__FUiP13sndCSeSeqDatai_0x1901f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7DCu; }
        if (ctx->pc != 0x18E7DCu) { return; }
    }
    ctx->pc = 0x18E7DCu;
label_18e7dc:
    // 0x18e7dc: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x18e7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e7e0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x18e7e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e7e4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E7E4u;
    {
        const bool branch_taken_0x18e7e4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x18e7e4) {
            ctx->pc = 0x18E800u;
            goto label_18e800;
        }
    }
    ctx->pc = 0x18E7ECu;
    // 0x18e7ec: 0xa2300004  sb          $s0, 0x4($s1)
    ctx->pc = 0x18e7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 16));
    // 0x18e7f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e7f4: 0xa6350002  sh          $s5, 0x2($s1)
    ctx->pc = 0x18e7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x18e7f8: 0xa2370005  sb          $s7, 0x5($s1)
    ctx->pc = 0x18e7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 23));
    // 0x18e7fc: 0xa2230006  sb          $v1, 0x6($s1)
    ctx->pc = 0x18e7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
label_18e800:
    // 0x18e800: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x18e800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18e804: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18e804u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18e808: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18e808u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e80c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18e80cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e810: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18e810u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e814: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18e814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e818: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18e818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e81c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e828: 0x3e00008  jr          $ra
    ctx->pc = 0x18E828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E828u;
            // 0x18e82c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E830u;
}
