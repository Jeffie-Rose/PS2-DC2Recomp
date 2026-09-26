#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: quorem
// Address: 0x124040 - 0x124254
void quorem_0x124040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quorem_0x124040");
#endif

    switch (ctx->pc) {
        case 0x1240d0u: goto label_1240d0;
        case 0x124148u: goto label_124148;
        case 0x124174u: goto label_124174;
        case 0x124190u: goto label_124190;
        case 0x124208u: goto label_124208;
        default: break;
    }

    ctx->pc = 0x124040u;

    // 0x124040: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x124040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x124044: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x124044u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124048: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x124048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12404c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12404cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x124050: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x124050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124054: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x124054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x124058: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x124058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x12405c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x124060: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x124060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124064: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x124064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x124068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12406c: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x12406cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x124070: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x124070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x124074: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x124074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x124078: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x124078u;
    {
        const bool branch_taken_0x124078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124078u;
            // 0x12407c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124078) {
            ctx->pc = 0x12422Cu;
            goto label_12422c;
        }
    }
    ctx->pc = 0x124080u;
    // 0x124080: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x124080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x124084: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x124084u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x124088: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x124088u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12408c: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x12408cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x124090: 0x1679821  addu        $s3, $t3, $a3
    ctx->pc = 0x124090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x124094: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x124094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x124098: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x124098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12409c: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x12409cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1240a0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1240a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1240a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1240a8: 0x1a2001b  divu        $zero, $t5, $v0
    ctx->pc = 0x1240a8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x1240ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1240ACu;
    {
        const bool branch_taken_0x1240ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240ac) {
            ctx->pc = 0x1240B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1240ACu;
            // 0x1240b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1240B4u;
            goto label_1240b4;
        }
    }
    ctx->pc = 0x1240B4u;
label_1240b4:
    // 0x1240b4: 0xa812  mflo        $s5
    ctx->pc = 0x1240b4u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x1240b8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1240b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240bc: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1240BCu;
    {
        const bool branch_taken_0x1240bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1240BCu;
            // 0x1240c0: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240bc) {
            ctx->pc = 0x124168u;
            goto label_124168;
        }
    }
    ctx->pc = 0x1240C4u;
    // 0x1240c4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1240c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1240c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1240cc: 0x0  nop
    ctx->pc = 0x1240ccu;
    // NOP
label_1240d0:
    // 0x1240d0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1240d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1240d4: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x1240d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1240d8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1240d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1240dc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1240dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1240e0: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x1240e0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1240e4: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x1240e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1240e8: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1240e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1240ec: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x1240ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1240f0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1240f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1240f4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1240f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1240f8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1240f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1240fc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1240fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x124100: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x124100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x124104: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x124104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x124108: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x124108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x12410c: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x12410cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x124110: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x124110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x124114: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x124114u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x124118: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x124118u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12411c: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x12411cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x124120: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x124120u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x124124: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x124124u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x124128: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x124128u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12412c: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x12412cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x124130: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x124130u;
    {
        const bool branch_taken_0x124130 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x124134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124130u;
            // 0x124134: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124130) {
            ctx->pc = 0x1240D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1240d0;
        }
    }
    ctx->pc = 0x124138u;
    // 0x124138: 0x15a0000c  bnez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x124138u;
    {
        const bool branch_taken_0x124138 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124138u;
            // 0x12413c: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124138) {
            ctx->pc = 0x12416Cu;
            goto label_12416c;
        }
    }
    ctx->pc = 0x124140u;
    // 0x124140: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124140u;
    {
        const bool branch_taken_0x124140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124140u;
            // 0x124144: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124140) {
            ctx->pc = 0x12414Cu;
            goto label_12414c;
        }
    }
    ctx->pc = 0x124148u;
label_124148:
    // 0x124148: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x124148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_12414c:
    // 0x12414c: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x12414cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x124150: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x124150u;
    {
        const bool branch_taken_0x124150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124150) {
            ctx->pc = 0x124154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124150u;
            // 0x124154: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124168u;
            goto label_124168;
        }
    }
    ctx->pc = 0x124158u;
    // 0x124158: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x124158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12415c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12415Cu;
    {
        const bool branch_taken_0x12415c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12415Cu;
            // 0x124160: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12415c) {
            ctx->pc = 0x124148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124148;
        }
    }
    ctx->pc = 0x124164u;
    // 0x124164: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x124164u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_124168:
    // 0x124168: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x124168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12416c:
    // 0x12416c: 0xc049f12  jal         func_127C48
    ctx->pc = 0x12416Cu;
    SET_GPR_U32(ctx, 31, 0x124174u);
    ctx->pc = 0x124170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12416Cu;
            // 0x124170: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C48u;
    if (runtime->hasFunction(0x127C48u)) {
        auto targetFn = runtime->lookupFunction(0x127C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124174u; }
        if (ctx->pc != 0x124174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x127c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124174u; }
        if (ctx->pc != 0x124174u) { return; }
    }
    ctx->pc = 0x124174u;
label_124174:
    // 0x124174: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x124174u;
    {
        const bool branch_taken_0x124174 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x124178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124174u;
            // 0x124178: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124174) {
            ctx->pc = 0x124228u;
            goto label_124228;
        }
    }
    ctx->pc = 0x12417Cu;
    // 0x12417c: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x12417cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x124180: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x124180u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124184: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x124184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124188: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x124188u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12418c: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x12418cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_124190:
    // 0x124190: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x124190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x124194: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x124194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x124198: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x124198u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x12419c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x12419cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1241a0: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x1241a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1241a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1241a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1241a8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1241a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1241ac: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1241acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1241b0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1241b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1241b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1241b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1241b8: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x1241b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1241bc: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1241bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1241c0: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x1241c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1241c4: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1241c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1241c8: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x1241c8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1241cc: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1241ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1241d0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1241d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1241d4: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x1241d4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1241d8: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x1241d8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1241dc: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1241dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1241e0: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x1241e0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1241e4: 0x26b102b  sltu        $v0, $s3, $t3
    ctx->pc = 0x1241e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1241e8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1241E8u;
    {
        const bool branch_taken_0x1241e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1241ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1241E8u;
            // 0x1241ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241e8) {
            ctx->pc = 0x124190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124190;
        }
    }
    ctx->pc = 0x1241F0u;
    // 0x1241f0: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x1241f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1241f4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1241f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1241f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1241F8u;
    {
        const bool branch_taken_0x1241f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1241FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1241F8u;
            // 0x1241fc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1241f8) {
            ctx->pc = 0x12422Cu;
            goto label_12422c;
        }
    }
    ctx->pc = 0x124200u;
    // 0x124200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124200u;
    {
        const bool branch_taken_0x124200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124200u;
            // 0x124204: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124200) {
            ctx->pc = 0x12420Cu;
            goto label_12420c;
        }
    }
    ctx->pc = 0x124208u;
label_124208:
    // 0x124208: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x124208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_12420c:
    // 0x12420c: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x12420cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x124210: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x124210u;
    {
        const bool branch_taken_0x124210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124210) {
            ctx->pc = 0x124214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124210u;
            // 0x124214: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124228u;
            goto label_124228;
        }
    }
    ctx->pc = 0x124218u;
    // 0x124218: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x124218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12421c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12421Cu;
    {
        const bool branch_taken_0x12421c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12421c) {
            ctx->pc = 0x124220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12421Cu;
            // 0x124220: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124208;
        }
    }
    ctx->pc = 0x124224u;
    // 0x124224: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x124224u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_124228:
    // 0x124228: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x124228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12422c:
    // 0x12422c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12422cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x124230: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x124230u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x124234: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x124234u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124238: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x124238u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12423c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12423cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124240: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x124240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124244: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x124244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12424c: 0x3e00008  jr          $ra
    ctx->pc = 0x12424Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12424Cu;
            // 0x124250: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124254u;
}
