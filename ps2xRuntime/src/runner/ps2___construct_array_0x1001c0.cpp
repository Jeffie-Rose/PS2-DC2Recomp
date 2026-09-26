#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __construct_array
// Address: 0x1001c0 - 0x1002e4
void ps2___construct_array_0x1001c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___construct_array_0x1001c0");
#endif

    switch (ctx->pc) {
        case 0x1001c0u: goto label_1001c0;
        case 0x1001c4u: goto label_1001c4;
        case 0x1001c8u: goto label_1001c8;
        case 0x1001ccu: goto label_1001cc;
        case 0x1001d0u: goto label_1001d0;
        case 0x1001d4u: goto label_1001d4;
        case 0x1001d8u: goto label_1001d8;
        case 0x1001dcu: goto label_1001dc;
        case 0x1001e0u: goto label_1001e0;
        case 0x1001e4u: goto label_1001e4;
        case 0x1001e8u: goto label_1001e8;
        case 0x1001ecu: goto label_1001ec;
        case 0x1001f0u: goto label_1001f0;
        case 0x1001f4u: goto label_1001f4;
        case 0x1001f8u: goto label_1001f8;
        case 0x1001fcu: goto label_1001fc;
        case 0x100200u: goto label_100200;
        case 0x100204u: goto label_100204;
        case 0x100208u: goto label_100208;
        case 0x10020cu: goto label_10020c;
        case 0x100210u: goto label_100210;
        case 0x100214u: goto label_100214;
        case 0x100218u: goto label_100218;
        case 0x10021cu: goto label_10021c;
        case 0x100220u: goto label_100220;
        case 0x100224u: goto label_100224;
        case 0x100228u: goto label_100228;
        case 0x10022cu: goto label_10022c;
        case 0x100230u: goto label_100230;
        case 0x100234u: goto label_100234;
        case 0x100238u: goto label_100238;
        case 0x10023cu: goto label_10023c;
        case 0x100240u: goto label_100240;
        case 0x100244u: goto label_100244;
        case 0x100248u: goto label_100248;
        case 0x10024cu: goto label_10024c;
        case 0x100250u: goto label_100250;
        case 0x100254u: goto label_100254;
        case 0x100258u: goto label_100258;
        case 0x10025cu: goto label_10025c;
        case 0x100260u: goto label_100260;
        case 0x100264u: goto label_100264;
        case 0x100268u: goto label_100268;
        case 0x10026cu: goto label_10026c;
        case 0x100270u: goto label_100270;
        case 0x100274u: goto label_100274;
        case 0x100278u: goto label_100278;
        case 0x10027cu: goto label_10027c;
        case 0x100280u: goto label_100280;
        case 0x100284u: goto label_100284;
        case 0x100288u: goto label_100288;
        case 0x10028cu: goto label_10028c;
        case 0x100290u: goto label_100290;
        case 0x100294u: goto label_100294;
        case 0x100298u: goto label_100298;
        case 0x10029cu: goto label_10029c;
        case 0x1002a0u: goto label_1002a0;
        case 0x1002a4u: goto label_1002a4;
        case 0x1002a8u: goto label_1002a8;
        case 0x1002acu: goto label_1002ac;
        case 0x1002b0u: goto label_1002b0;
        case 0x1002b4u: goto label_1002b4;
        case 0x1002b8u: goto label_1002b8;
        case 0x1002bcu: goto label_1002bc;
        case 0x1002c0u: goto label_1002c0;
        case 0x1002c4u: goto label_1002c4;
        case 0x1002c8u: goto label_1002c8;
        case 0x1002ccu: goto label_1002cc;
        case 0x1002d0u: goto label_1002d0;
        case 0x1002d4u: goto label_1002d4;
        case 0x1002d8u: goto label_1002d8;
        case 0x1002dcu: goto label_1002dc;
        case 0x1002e0u: goto label_1002e0;
        default: break;
    }

    ctx->pc = 0x1001c0u;

label_1001c0:
    // 0x1001c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1001c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1001c4:
    // 0x1001c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1001c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1001c8:
    // 0x1001c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1001c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1001cc:
    // 0x1001cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1001ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1001d0:
    // 0x1001d0: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x1001d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1001d4:
    // 0x1001d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1001d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1001d8:
    // 0x1001d8: 0x27b6009c  addiu       $s6, $sp, 0x9C
    ctx->pc = 0x1001d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_1001dc:
    // 0x1001dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1001dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1001e0:
    // 0x1001e0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1001e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1001e4:
    // 0x1001e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1001e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1001e8:
    // 0x1001e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1001e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1001ec:
    // 0x1001ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1001ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1001f0:
    // 0x1001f0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1001f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1001f4:
    // 0x1001f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1001f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1001f8:
    // 0x1001f8: 0x27b20094  addiu       $s2, $sp, 0x94
    ctx->pc = 0x1001f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_1001fc:
    // 0x1001fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1001fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100200:
    // 0x100200: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x100200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_100204:
    // 0x100204: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x100204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_100208:
    // 0x100208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10020c:
    // 0x10020c: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x10020cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_100210:
    // 0x100210: 0xaef30000  sw          $s3, 0x0($s7)
    ctx->pc = 0x100210u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
label_100214:
    // 0x100214: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x100214u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
label_100218:
    // 0x100218: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x100218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_10021c:
    // 0x10021c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x10021cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_100220:
    // 0x100220: 0x10000007  b           . + 4 + (0x7 << 2)
label_100224:
    if (ctx->pc == 0x100224u) {
        ctx->pc = 0x100224u;
            // 0x100224: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x100228u;
        goto label_100228;
    }
    ctx->pc = 0x100220u;
    {
        const bool branch_taken_0x100220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100220u;
            // 0x100224: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100220) {
            ctx->pc = 0x100240u;
            goto label_100240;
        }
    }
    ctx->pc = 0x100228u;
label_100228:
    // 0x100228: 0x2a0f809  jalr        $s5
label_10022c:
    if (ctx->pc == 0x10022Cu) {
        ctx->pc = 0x10022Cu;
            // 0x10022c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x100230u;
        goto label_100230;
    }
    ctx->pc = 0x100228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x100230u);
        ctx->pc = 0x10022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100228u;
            // 0x10022c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x100230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100230u; }
            if (ctx->pc != 0x100230u) { return; }
        }
        }
    }
    ctx->pc = 0x100230u;
label_100230:
    // 0x100230: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_100234:
    // 0x100234: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x100234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_100238:
    // 0x100238: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x100238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10023c:
    // 0x10023c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x10023cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_100240:
    // 0x100240: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x100240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_100244:
    // 0x100244: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x100244u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_100248:
    // 0x100248: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_10024c:
    if (ctx->pc == 0x10024Cu) {
        ctx->pc = 0x10024Cu;
            // 0x10024c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100250u;
        goto label_100250;
    }
    ctx->pc = 0x100248u;
    {
        const bool branch_taken_0x100248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10024Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100248u;
            // 0x10024c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100248) {
            ctx->pc = 0x100228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100228;
        }
    }
    ctx->pc = 0x100250u;
label_100250:
    // 0x100250: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x100250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_100254:
    // 0x100254: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x100254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_100258:
    // 0x100258: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_10025c:
    if (ctx->pc == 0x10025Cu) {
        ctx->pc = 0x100260u;
        goto label_100260;
    }
    ctx->pc = 0x100258u;
    {
        const bool branch_taken_0x100258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x100258) {
            ctx->pc = 0x1002B4u;
            goto label_1002b4;
        }
    }
    ctx->pc = 0x100260u;
label_100260:
    // 0x100260: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x100260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_100264:
    // 0x100264: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_100268:
    if (ctx->pc == 0x100268u) {
        ctx->pc = 0x10026Cu;
        goto label_10026c;
    }
    ctx->pc = 0x100264u;
    {
        const bool branch_taken_0x100264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100264) {
            ctx->pc = 0x1002B4u;
            goto label_1002b4;
        }
    }
    ctx->pc = 0x10026Cu;
label_10026c:
    // 0x10026c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_100270:
    // 0x100270: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x100270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_100274:
    // 0x100274: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x100274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_100278:
    // 0x100278: 0x1000000a  b           . + 4 + (0xA << 2)
label_10027c:
    if (ctx->pc == 0x10027Cu) {
        ctx->pc = 0x10027Cu;
            // 0x10027c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x100280u;
        goto label_100280;
    }
    ctx->pc = 0x100278u;
    {
        const bool branch_taken_0x100278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100278u;
            // 0x10027c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100278) {
            ctx->pc = 0x1002A4u;
            goto label_1002a4;
        }
    }
    ctx->pc = 0x100280u;
label_100280:
    // 0x100280: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x100280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_100284:
    // 0x100284: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x100284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_100288:
    // 0x100288: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x100288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_10028c:
    // 0x10028c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x10028cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_100290:
    // 0x100290: 0x40f809  jalr        $v0
label_100294:
    if (ctx->pc == 0x100294u) {
        ctx->pc = 0x100294u;
            // 0x100294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100298u;
        goto label_100298;
    }
    ctx->pc = 0x100290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100298u);
        ctx->pc = 0x100294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100290u;
            // 0x100294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x100298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100298u; }
            if (ctx->pc != 0x100298u) { return; }
        }
        }
    }
    ctx->pc = 0x100298u;
label_100298:
    // 0x100298: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x100298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10029c:
    // 0x10029c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1002a0:
    // 0x1002a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1002a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1002a4:
    // 0x1002a4: 0x0  nop
    ctx->pc = 0x1002a4u;
    // NOP
label_1002a8:
    // 0x1002a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1002a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1002ac:
    // 0x1002ac: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1002b0:
    if (ctx->pc == 0x1002B0u) {
        ctx->pc = 0x1002B4u;
        goto label_1002b4;
    }
    ctx->pc = 0x1002ACu;
    {
        const bool branch_taken_0x1002ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1002ac) {
            ctx->pc = 0x100280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100280;
        }
    }
    ctx->pc = 0x1002B4u;
label_1002b4:
    // 0x1002b4: 0x0  nop
    ctx->pc = 0x1002b4u;
    // NOP
label_1002b8:
    // 0x1002b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1002b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1002bc:
    // 0x1002bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1002bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1002c0:
    // 0x1002c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1002c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1002c4:
    // 0x1002c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1002c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1002c8:
    // 0x1002c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1002c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1002cc:
    // 0x1002cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1002ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1002d0:
    // 0x1002d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1002d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1002d4:
    // 0x1002d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1002d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1002d8:
    // 0x1002d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1002d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1002dc:
    // 0x1002dc: 0x3e00008  jr          $ra
label_1002e0:
    if (ctx->pc == 0x1002E0u) {
        ctx->pc = 0x1002E0u;
            // 0x1002e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1002E4u;
        goto label_fallthrough_0x1002dc;
    }
    ctx->pc = 0x1002DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1002E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1002DCu;
            // 0x1002e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1002dc:
    ctx->pc = 0x1002E4u;
}
