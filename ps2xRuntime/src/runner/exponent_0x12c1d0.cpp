#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: exponent
// Address: 0x12c1d0 - 0x12c2b0
void exponent_0x12c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("exponent_0x12c1d0");
#endif

    switch (ctx->pc) {
        case 0x12c218u: goto label_12c218;
        case 0x12c268u: goto label_12c268;
        default: break;
    }

    ctx->pc = 0x12c1d0u;

    // 0x12c1d0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x12c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x12c1d4: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C1D4u;
    {
        const bool branch_taken_0x12c1d4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x12C1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C1D4u;
            // 0x12c1d8: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1d4) {
            ctx->pc = 0x12C1F0u;
            goto label_12c1f0;
        }
    }
    ctx->pc = 0x12C1DCu;
    // 0x12c1dc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12c1e0: 0x52823  negu        $a1, $a1
    ctx->pc = 0x12c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x12c1e4: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x12c1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c1e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12C1E8u;
    {
        const bool branch_taken_0x12c1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C1E8u;
            // 0x12c1ec: 0x24880002  addiu       $t0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1e8) {
            ctx->pc = 0x12C1FCu;
            goto label_12c1fc;
        }
    }
    ctx->pc = 0x12C1F0u;
label_12c1f0:
    // 0x12c1f0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x12c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12c1f4: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x12c1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x12c1f8: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x12c1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_12c1fc:
    // 0x12c1fc: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x12c1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x12c200: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x12c200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12c204: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x12C204u;
    {
        const bool branch_taken_0x12c204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C204u;
            // 0x12c208: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c204) {
            ctx->pc = 0x12C28Cu;
            goto label_12c28c;
        }
    }
    ctx->pc = 0x12C20Cu;
    // 0x12c20c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x12c20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c210: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12c210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c214: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x12c214u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_12c218:
    // 0x12c218: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x12C218u;
    {
        const bool branch_taken_0x12c218 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x12c218) {
            ctx->pc = 0x12C21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C218u;
            // 0x12c21c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C220u;
            goto label_12c220;
        }
    }
    ctx->pc = 0x12C220u;
label_12c220:
    // 0x12c220: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12c220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12c224: 0x1010  mfhi        $v0
    ctx->pc = 0x12c224u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12c228: 0x1812  mflo        $v1
    ctx->pc = 0x12c228u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x12c22c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12c230: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12c230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c234: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x12c234u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c238: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x12c238u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12c23c: 0x50e90001  beql        $a3, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x12C23Cu;
    {
        const bool branch_taken_0x12c23c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x12c23c) {
            ctx->pc = 0x12C240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C23Cu;
            // 0x12c240: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C244u;
            goto label_12c244;
        }
    }
    ctx->pc = 0x12C244u;
label_12c244:
    // 0x12c244: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x12C244u;
    {
        const bool branch_taken_0x12c244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c244) {
            ctx->pc = 0x12C248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C244u;
            // 0x12c248: 0xa7001a  div         $zero, $a1, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c218;
        }
    }
    ctx->pc = 0x12C24Cu;
    // 0x12c24c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12c24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12c250: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x12c250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c254: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x12c254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12c258: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12C258u;
    {
        const bool branch_taken_0x12c258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C258u;
            // 0x12c25c: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c258) {
            ctx->pc = 0x12C2A4u;
            goto label_12c2a4;
        }
    }
    ctx->pc = 0x12C260u;
    // 0x12c260: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x12c260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c264: 0x0  nop
    ctx->pc = 0x12c264u;
    // NOP
label_12c268:
    // 0x12c268: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x12c268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12c26c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12c26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12c270: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x12c270u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c274: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x12c274u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12c278: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12c278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x12c27c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12C27Cu;
    {
        const bool branch_taken_0x12c27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c27c) {
            ctx->pc = 0x12C268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c268;
        }
    }
    ctx->pc = 0x12C284u;
    // 0x12c284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12C284u;
    {
        const bool branch_taken_0x12c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C284u;
            // 0x12c288: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c284) {
            ctx->pc = 0x12C2A8u;
            goto label_12c2a8;
        }
    }
    ctx->pc = 0x12C28Cu;
label_12c28c:
    // 0x12c28c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x12c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12c290: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x12c290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12c294: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x12c294u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c298: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12c298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x12c29c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x12c29cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x12c2a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12c2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_12c2a4:
    // 0x12c2a4: 0x1041023  subu        $v0, $t0, $a0
    ctx->pc = 0x12c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_12c2a8:
    // 0x12c2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2A8u;
            // 0x12c2ac: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C2B0u;
}
