#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcMakeBrd__11CMenuInventFi
// Address: 0x204270 - 0x204414
void CalcMakeBrd__11CMenuInventFi_0x204270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcMakeBrd__11CMenuInventFi_0x204270");
#endif

    switch (ctx->pc) {
        case 0x2042d4u: goto label_2042d4;
        case 0x2042e4u: goto label_2042e4;
        case 0x2042fcu: goto label_2042fc;
        case 0x20437cu: goto label_20437c;
        case 0x2043b8u: goto label_2043b8;
        case 0x2043c8u: goto label_2043c8;
        case 0x2043ecu: goto label_2043ec;
        default: break;
    }

    ctx->pc = 0x204270u;

    // 0x204270: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x204270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x204274: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x204274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x204278: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x204278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x20427c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x204280: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x204280u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204284: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x204284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x204288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x204288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20428c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20428cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x204290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x204298: 0x8c830ed8  lw          $v1, 0xED8($a0)
    ctx->pc = 0x204298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3800)));
    // 0x20429c: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x20429Cu;
    {
        const bool branch_taken_0x20429c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20429Cu;
            // 0x2042a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20429c) {
            ctx->pc = 0x2043ECu;
            goto label_2043ec;
        }
    }
    ctx->pc = 0x2042A4u;
    // 0x2042a4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2042a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2042a8: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x2042A8u;
    {
        const bool branch_taken_0x2042a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2042a8) {
            ctx->pc = 0x2043ECu;
            goto label_2043ec;
        }
    }
    ctx->pc = 0x2042B0u;
    // 0x2042b0: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x2042b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2042b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2042b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2042b8: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x2042b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
    // 0x2042bc: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x2042bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x2042c0: 0x8f8490dc  lw          $a0, -0x6F24($gp)
    ctx->pc = 0x2042c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
    // 0x2042c4: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x2042c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2042c8: 0x8e060100  lw          $a2, 0x100($s0)
    ctx->pc = 0x2042c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2042cc: 0xc07ff68  jal         func_1FFDA0
    ctx->pc = 0x2042CCu;
    SET_GPR_U32(ctx, 31, 0x2042D4u);
    ctx->pc = 0x2042D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2042CCu;
            // 0x2042d0: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFDA0u;
    if (runtime->hasFunction(0x1FFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2042D4u; }
        if (ctx->pc != 0x2042D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HowMuchZairyouMakeItem__17CInventDataManageFiiPi_0x1ffda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2042D4u; }
        if (ctx->pc != 0x2042D4u) { return; }
    }
    ctx->pc = 0x2042D4u;
label_2042d4:
    // 0x2042d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2042d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2042d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042dc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2042DCu;
    {
        const bool branch_taken_0x2042dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2042E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2042DCu;
            // 0x2042e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2042dc) {
            ctx->pc = 0x204354u;
            goto label_204354;
        }
    }
    ctx->pc = 0x2042E4u;
label_2042e4:
    // 0x2042e4: 0x212a821  addu        $s5, $s0, $s2
    ctx->pc = 0x2042e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2042e8: 0xa2a2013c  sb          $v0, 0x13C($s5)
    ctx->pc = 0x2042e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 316), (uint8_t)GPR_U32(ctx, 2));
    // 0x2042ec: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2042ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2042f0: 0x24540080  addiu       $s4, $v0, 0x80
    ctx->pc = 0x2042f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2042f4: 0xc0684dc  jal         func_1A1370
    ctx->pc = 0x2042F4u;
    SET_GPR_U32(ctx, 31, 0x2042FCu);
    ctx->pc = 0x2042F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2042F4u;
            // 0x2042f8: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2042FCu; }
        if (ctx->pc != 0x2042FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2042FCu; }
        if (ctx->pc != 0x2042FCu) { return; }
    }
    ctx->pc = 0x2042FCu;
label_2042fc:
    // 0x2042fc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2042fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x204300: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x204300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204304: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x204304u;
    {
        const bool branch_taken_0x204304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204304u;
            // 0x204308: 0x26840008  addiu       $a0, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204304) {
            ctx->pc = 0x204318u;
            goto label_204318;
        }
    }
    ctx->pc = 0x20430Cu;
    // 0x20430c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204310u;
    {
        const bool branch_taken_0x204310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204310u;
            // 0x204314: 0xa2a3013d  sb          $v1, 0x13D($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 317), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204310) {
            ctx->pc = 0x20431Cu;
            goto label_20431c;
        }
    }
    ctx->pc = 0x204318u;
label_204318:
    // 0x204318: 0xa2a0013d  sb          $zero, 0x13D($s5)
    ctx->pc = 0x204318u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 317), (uint8_t)GPR_U32(ctx, 0));
label_20431c:
    // 0x20431c: 0x0  nop
    ctx->pc = 0x20431cu;
    // NOP
    // 0x204320: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x204320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204324: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x204324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204328: 0xa6a20140  sh          $v0, 0x140($s5)
    ctx->pc = 0x204328u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x20432c: 0x86a20140  lh          $v0, 0x140($s5)
    ctx->pc = 0x20432cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x204330: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x204330u;
    {
        const bool branch_taken_0x204330 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x204334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204330u;
            // 0x204334: 0x26a50140  addiu       $a1, $s5, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204330) {
            ctx->pc = 0x20433Cu;
            goto label_20433c;
        }
    }
    ctx->pc = 0x204338u;
    // 0x204338: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x204338u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_20433c:
    // 0x20433c: 0x0  nop
    ctx->pc = 0x20433cu;
    // NOP
    // 0x204340: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x204340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204344: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x204344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x204348: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x204348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x20434c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20434cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x204350: 0xa6a2013e  sh          $v0, 0x13E($s5)
    ctx->pc = 0x204350u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 318), (uint16_t)GPR_U32(ctx, 2));
label_204354:
    // 0x204354: 0x0  nop
    ctx->pc = 0x204354u;
    // NOP
    // 0x204358: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x204358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20435c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x20435cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x204360: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x204360u;
    {
        const bool branch_taken_0x204360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204360u;
            // 0x204364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204360) {
            ctx->pc = 0x2042E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2042e4;
        }
    }
    ctx->pc = 0x204368u;
    // 0x204368: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x204368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20436c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x20436Cu;
    {
        const bool branch_taken_0x20436c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20436Cu;
            // 0x204370: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20436c) {
            ctx->pc = 0x2043A0u;
            goto label_2043a0;
        }
    }
    ctx->pc = 0x204374u;
    // 0x204374: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x204374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x204378: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x204378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20437c:
    // 0x20437c: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x20437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x204380: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x204380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x204384: 0xa080013c  sb          $zero, 0x13C($a0)
    ctx->pc = 0x204384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x204388: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x204388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20438c: 0xa080013d  sb          $zero, 0x13D($a0)
    ctx->pc = 0x20438cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x204390: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x204394: 0xa480013e  sh          $zero, 0x13E($a0)
    ctx->pc = 0x204394u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 318), (uint16_t)GPR_U32(ctx, 0));
    // 0x204398: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x204398u;
    {
        const bool branch_taken_0x204398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20439Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204398u;
            // 0x20439c: 0xa4800140  sh          $zero, 0x140($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204398) {
            ctx->pc = 0x20437Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20437c;
        }
    }
    ctx->pc = 0x2043A0u;
label_2043a0:
    // 0x2043a0: 0x82020108  lb          $v0, 0x108($s0)
    ctx->pc = 0x2043a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2043a4: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x2043a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x2043a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2043a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2043ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2043acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2043b0: 0xc094558  jal         func_251560
    ctx->pc = 0x2043B0u;
    SET_GPR_U32(ctx, 31, 0x2043B8u);
    ctx->pc = 0x2043B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2043B0u;
            // 0x2043b4: 0xae02015c  sw          $v0, 0x15C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043B8u; }
        if (ctx->pc != 0x2043B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043B8u; }
        if (ctx->pc != 0x2043B8u) { return; }
    }
    ctx->pc = 0x2043B8u;
label_2043b8:
    // 0x2043b8: 0x26040164  addiu       $a0, $s0, 0x164
    ctx->pc = 0x2043b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x2043bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2043bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2043c0: 0xc094558  jal         func_251560
    ctx->pc = 0x2043C0u;
    SET_GPR_U32(ctx, 31, 0x2043C8u);
    ctx->pc = 0x2043C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2043C0u;
            // 0x2043c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043C8u; }
        if (ctx->pc != 0x2043C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043C8u; }
        if (ctx->pc != 0x2043C8u) { return; }
    }
    ctx->pc = 0x2043C8u;
label_2043c8:
    // 0x2043c8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2043c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2043cc: 0x8e040ed8  lw          $a0, 0xED8($s0)
    ctx->pc = 0x2043ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3800)));
    // 0x2043d0: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x2043d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2043d4: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x2043d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x2043d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2043d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2043dc: 0x2605013c  addiu       $a1, $s0, 0x13C
    ctx->pc = 0x2043dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 316));
    // 0x2043e0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2043e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2043e4: 0xc088a40  jal         func_222900
    ctx->pc = 0x2043E4u;
    SET_GPR_U32(ctx, 31, 0x2043ECu);
    ctx->pc = 0x2043E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2043E4u;
            // 0x2043e8: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222900u;
    if (runtime->hasFunction(0x222900u)) {
        auto targetFn = runtime->lookupFunction(0x222900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043ECu; }
        if (ctx->pc != 0x2043ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCommonBrdDrawInfo__FPfP21MENUFORM_MAKEBRD_INFOP6ClsMes_0x222900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2043ECu; }
        if (ctx->pc != 0x2043ECu) { return; }
    }
    ctx->pc = 0x2043ECu;
label_2043ec:
    // 0x2043ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2043ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2043f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2043f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2043f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2043f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2043f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2043f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2043fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2043fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20440c: 0x3e00008  jr          $ra
    ctx->pc = 0x20440Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20440Cu;
            // 0x204410: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204414u;
}
