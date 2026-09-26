#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dpdiv
// Address: 0x2882a0 - 0x288408
void dpdiv_0x2882a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpdiv_0x2882a0");
#endif

    switch (ctx->pc) {
        case 0x2882c0u: goto label_2882c0;
        case 0x2882d0u: goto label_2882d0;
        case 0x2883a0u: goto label_2883a0;
        case 0x2883f8u: goto label_2883f8;
        default: break;
    }

    ctx->pc = 0x2882a0u;

    // 0x2882a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2882a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2882a4: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x2882a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x2882a8: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x2882a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2882ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2882acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2882b0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2882b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2882b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2882b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2882b8: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x2882B8u;
    SET_GPR_U32(ctx, 31, 0x2882C0u);
    ctx->pc = 0x2882BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882B8u;
            // 0x2882bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882C0u; }
        if (ctx->pc != 0x2882C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882C0u; }
        if (ctx->pc != 0x2882C0u) { return; }
    }
    ctx->pc = 0x2882C0u;
label_2882c0:
    // 0x2882c0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2882c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2882c4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2882c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2882c8: 0xc0a1f16  jal         func_287C58
    ctx->pc = 0x2882C8u;
    SET_GPR_U32(ctx, 31, 0x2882D0u);
    ctx->pc = 0x2882CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882C8u;
            // 0x2882cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287C58u;
    if (runtime->hasFunction(0x287C58u)) {
        auto targetFn = runtime->lookupFunction(0x287C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882D0u; }
        if (ctx->pc != 0x2882D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x287c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882D0u; }
        if (ctx->pc != 0x2882D0u) { return; }
    }
    ctx->pc = 0x2882D0u;
label_2882d0:
    // 0x2882d0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2882d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2882d4: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x2882d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2882d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2882D8u;
    {
        const bool branch_taken_0x2882d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2882DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2882D8u;
            // 0x2882dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882d8) {
            ctx->pc = 0x2882E8u;
            goto label_2882e8;
        }
    }
    ctx->pc = 0x2882E0u;
    // 0x2882e0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2882E0u;
    {
        const bool branch_taken_0x2882e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2882E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2882E0u;
            // 0x2882e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882e0) {
            ctx->pc = 0x2883F0u;
            goto label_2883f0;
        }
    }
    ctx->pc = 0x2882E8u;
label_2882e8:
    // 0x2882e8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2882e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2882ec: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2882ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2882f0: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2882F0u;
    {
        const bool branch_taken_0x2882f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2882F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2882F0u;
            // 0x2882f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882f0) {
            ctx->pc = 0x2883F0u;
            goto label_2883f0;
        }
    }
    ctx->pc = 0x2882F8u;
    // 0x2882f8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2882f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2882fc: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x2882fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x288300: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x288300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x288304: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x288304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x288308: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288308u;
    {
        const bool branch_taken_0x288308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288308u;
            // 0x28830c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288308) {
            ctx->pc = 0x28831Cu;
            goto label_28831c;
        }
    }
    ctx->pc = 0x288310u;
    // 0x288310: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x288310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x288314: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288314u;
    {
        const bool branch_taken_0x288314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288314u;
            // 0x288318: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288314) {
            ctx->pc = 0x288330u;
            goto label_288330;
        }
    }
    ctx->pc = 0x28831Cu;
label_28831c:
    // 0x28831c: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x28831Cu;
    {
        const bool branch_taken_0x28831c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x288320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28831Cu;
            // 0x288320: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28831c) {
            ctx->pc = 0x2883F0u;
            goto label_2883f0;
        }
    }
    ctx->pc = 0x288324u;
    // 0x288324: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x288324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x288328: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x288328u;
    {
        const bool branch_taken_0x288328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288328u;
            // 0x28832c: 0x24445200  addiu       $a0, $v0, 0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288328) {
            ctx->pc = 0x2883F0u;
            goto label_2883f0;
        }
    }
    ctx->pc = 0x288330u;
label_288330:
    // 0x288330: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288330u;
    {
        const bool branch_taken_0x288330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288330u;
            // 0x288334: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288330) {
            ctx->pc = 0x288348u;
            goto label_288348;
        }
    }
    ctx->pc = 0x288338u;
    // 0x288338: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x288338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x28833c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28833cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288340: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x288340u;
    {
        const bool branch_taken_0x288340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288340u;
            // 0x288344: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288340) {
            ctx->pc = 0x2883F0u;
            goto label_2883f0;
        }
    }
    ctx->pc = 0x288348u;
label_288348:
    // 0x288348: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288348u;
    {
        const bool branch_taken_0x288348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28834Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288348u;
            // 0x28834c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288348) {
            ctx->pc = 0x288360u;
            goto label_288360;
        }
    }
    ctx->pc = 0x288350u;
    // 0x288350: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x288350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x288354: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x288354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288358: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x288358u;
    {
        const bool branch_taken_0x288358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28835Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288358u;
            // 0x28835c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288358) {
            ctx->pc = 0x2883F0u;
            goto label_2883f0;
        }
    }
    ctx->pc = 0x288360u;
label_288360:
    // 0x288360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x288360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x288364: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x288364u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288368: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x288368u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28836c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x28836cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x288370: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x288370u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x288374: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x288374u;
    {
        const bool branch_taken_0x288374 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x288378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288374u;
            // 0x288378: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288374) {
            ctx->pc = 0x28838Cu;
            goto label_28838c;
        }
    }
    ctx->pc = 0x28837Cu;
    // 0x28837c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x288380: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x288380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x288384: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x288384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x288388: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x288388u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_28838c:
    // 0x28838c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x28838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x288390: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x288390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x288394: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x288394u;
    {
        const bool branch_taken_0x288394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288394u;
            // 0x288398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288394) {
            ctx->pc = 0x2883A4u;
            goto label_2883a4;
        }
    }
    ctx->pc = 0x28839Cu;
    // 0x28839c: 0x0  nop
    ctx->pc = 0x28839cu;
    // NOP
label_2883a0:
    // 0x2883a0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x2883a0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2883a4:
    // 0x2883a4: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2883A4u;
    {
        const bool branch_taken_0x2883a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2883a4) {
            ctx->pc = 0x2883A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2883A4u;
            // 0x2883a8: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2883B8u;
            goto label_2883b8;
        }
    }
    ctx->pc = 0x2883ACu;
    // 0x2883ac: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2883acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2883b0: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x2883b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x2883b4: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2883b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_2883b8:
    // 0x2883b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2883B8u;
    {
        const bool branch_taken_0x2883b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2883BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2883B8u;
            // 0x2883bc: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883b8) {
            ctx->pc = 0x2883A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2883a0;
        }
    }
    ctx->pc = 0x2883C0u;
    // 0x2883c0: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2883c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2883c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2883c8: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2883C8u;
    {
        const bool branch_taken_0x2883c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2883c8) {
            ctx->pc = 0x2883CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2883C8u;
            // 0x2883cc: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2883ECu;
            goto label_2883ec;
        }
    }
    ctx->pc = 0x2883D0u;
    // 0x2883d0: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x2883d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x2883d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2883D4u;
    {
        const bool branch_taken_0x2883d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2883D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2883D4u;
            // 0x2883d8: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883d4) {
            ctx->pc = 0x2883E4u;
            goto label_2883e4;
        }
    }
    ctx->pc = 0x2883DCu;
    // 0x2883dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2883DCu;
    {
        const bool branch_taken_0x2883dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2883E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2883DCu;
            // 0x2883e0: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883dc) {
            ctx->pc = 0x2883E8u;
            goto label_2883e8;
        }
    }
    ctx->pc = 0x2883E4u;
label_2883e4:
    // 0x2883e4: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x2883e4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2));
label_2883e8:
    // 0x2883e8: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x2883e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_2883ec:
    // 0x2883ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2883ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2883f0:
    // 0x2883f0: 0xc0a1eca  jal         func_287B28
    ctx->pc = 0x2883F0u;
    SET_GPR_U32(ctx, 31, 0x2883F8u);
    ctx->pc = 0x287B28u;
    if (runtime->hasFunction(0x287B28u)) {
        auto targetFn = runtime->lookupFunction(0x287B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2883F8u; }
        if (ctx->pc != 0x2883F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x287b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2883F8u; }
        if (ctx->pc != 0x2883F8u) { return; }
    }
    ctx->pc = 0x2883F8u;
label_2883f8:
    // 0x2883f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2883f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2883fc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2883fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288400: 0x3e00008  jr          $ra
    ctx->pc = 0x288400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288400u;
            // 0x288404: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288408u;
}
