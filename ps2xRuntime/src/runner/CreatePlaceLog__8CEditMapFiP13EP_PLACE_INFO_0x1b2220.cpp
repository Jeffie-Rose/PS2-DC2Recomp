#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePlaceLog__8CEditMapFiP13EP_PLACE_INFO
// Address: 0x1b2220 - 0x1b2314
void CreatePlaceLog__8CEditMapFiP13EP_PLACE_INFO_0x1b2220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePlaceLog__8CEditMapFiP13EP_PLACE_INFO_0x1b2220");
#endif

    switch (ctx->pc) {
        case 0x1b2274u: goto label_1b2274;
        case 0x1b22c0u: goto label_1b22c0;
        default: break;
    }

    ctx->pc = 0x1b2220u;

    // 0x1b2220: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2220u;
    {
        const bool branch_taken_0x1b2220 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2220u;
            // 0x1b2224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2220) {
            ctx->pc = 0x1B2230u;
            goto label_1b2230;
        }
    }
    ctx->pc = 0x1B2228u;
    // 0x1b2228: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2228u;
    {
        const bool branch_taken_0x1b2228 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1b2228) {
            ctx->pc = 0x1B2238u;
            goto label_1b2238;
        }
    }
    ctx->pc = 0x1B2230u;
label_1b2230:
    // 0x1b2230: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1B2230u;
    {
        const bool branch_taken_0x1b2230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2230) {
            ctx->pc = 0x1B230Cu;
            goto label_1b230c;
        }
    }
    ctx->pc = 0x1B2238u;
label_1b2238:
    // 0x1b2238: 0x8c890f48  lw          $t1, 0xF48($a0)
    ctx->pc = 0x1b2238u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3912)));
    // 0x1b223c: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B223Cu;
    {
        const bool branch_taken_0x1b223c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B223Cu;
            // 0x1b2240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b223c) {
            ctx->pc = 0x1B2250u;
            goto label_1b2250;
        }
    }
    ctx->pc = 0x1B2244u;
    // 0x1b2244: 0x8c8a0f4c  lw          $t2, 0xF4C($a0)
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3916)));
    // 0x1b2248: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2248u;
    {
        const bool branch_taken_0x1b2248 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2248) {
            ctx->pc = 0x1B2258u;
            goto label_1b2258;
        }
    }
    ctx->pc = 0x1B2250u;
label_1b2250:
    // 0x1b2250: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1B2250u;
    {
        const bool branch_taken_0x1b2250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2250) {
            ctx->pc = 0x1B230Cu;
            goto label_1b230c;
        }
    }
    ctx->pc = 0x1B2258u;
label_1b2258:
    // 0x1b2258: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b225c: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B225Cu;
    {
        const bool branch_taken_0x1b225c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1B2260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B225Cu;
            // 0x1b2260: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b225c) {
            ctx->pc = 0x1B226Cu;
            goto label_1b226c;
        }
    }
    ctx->pc = 0x1B2264u;
    // 0x1b2264: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1B2264u;
    {
        const bool branch_taken_0x1b2264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2264u;
            // 0x1b2268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2264) {
            ctx->pc = 0x1B230Cu;
            goto label_1b230c;
        }
    }
    ctx->pc = 0x1B226Cu;
label_1b226c:
    // 0x1b226c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B226Cu;
    {
        const bool branch_taken_0x1b226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B226Cu;
            // 0x1b2270: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b226c) {
            ctx->pc = 0x1B2298u;
            goto label_1b2298;
        }
    }
    ctx->pc = 0x1B2274u;
label_1b2274:
    // 0x1b2274: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x1b2274u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2278: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1b2278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1b227c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B227Cu;
    {
        const bool branch_taken_0x1b227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b227c) {
            ctx->pc = 0x1B2288u;
            goto label_1b2288;
        }
    }
    ctx->pc = 0x1B2284u;
    // 0x1b2284: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b2284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1b2288:
    // 0x1b2288: 0x18e00006  blez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2288u;
    {
        const bool branch_taken_0x1b2288 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1b2288) {
            ctx->pc = 0x1B22A4u;
            goto label_1b22a4;
        }
    }
    ctx->pc = 0x1B2290u;
    // 0x1b2290: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1b2290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b2294: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1b2294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1b2298:
    // 0x1b2298: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x1b2298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1b229c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B229Cu;
    {
        const bool branch_taken_0x1b229c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b229c) {
            ctx->pc = 0x1B2274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2274;
        }
    }
    ctx->pc = 0x1B22A4u;
label_1b22a4:
    // 0x1b22a4: 0x0  nop
    ctx->pc = 0x1b22a4u;
    // NOP
    // 0x1b22a8: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B22A8u;
    {
        const bool branch_taken_0x1b22a8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1B22ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22A8u;
            // 0x1b22ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22a8) {
            ctx->pc = 0x1B22B8u;
            goto label_1b22b8;
        }
    }
    ctx->pc = 0x1B22B0u;
    // 0x1b22b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B22B0u;
    {
        const bool branch_taken_0x1b22b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22B0u;
            // 0x1b22b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22b0) {
            ctx->pc = 0x1B230Cu;
            goto label_1b230c;
        }
    }
    ctx->pc = 0x1B22B8u;
label_1b22b8:
    // 0x1b22b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B22B8u;
    {
        const bool branch_taken_0x1b22b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22B8u;
            // 0x1b22bc: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22b8) {
            ctx->pc = 0x1B22F8u;
            goto label_1b22f8;
        }
    }
    ctx->pc = 0x1B22C0u;
label_1b22c0:
    // 0x1b22c0: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x1b22c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1b22c4: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1b22c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1b22c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B22C8u;
    {
        const bool branch_taken_0x1b22c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22C8u;
            // 0x1b22cc: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22c8) {
            ctx->pc = 0x1B22F0u;
            goto label_1b22f0;
        }
    }
    ctx->pc = 0x1B22D0u;
    // 0x1b22d0: 0xa5450000  sh          $a1, 0x0($t2)
    ctx->pc = 0x1b22d0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b22d4: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1b22d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b22d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b22d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b22dc: 0xa5420002  sh          $v0, 0x2($t2)
    ctx->pc = 0x1b22dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b22e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1b22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b22e4: 0xe2082a  slt         $at, $a3, $v0
    ctx->pc = 0x1b22e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b22e8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B22E8u;
    {
        const bool branch_taken_0x1b22e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22E8u;
            // 0x1b22ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22e8) {
            ctx->pc = 0x1B2308u;
            goto label_1b2308;
        }
    }
    ctx->pc = 0x1B22F0u;
label_1b22f0:
    // 0x1b22f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1b22f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b22f4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1b22f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_1b22f8:
    // 0x1b22f8: 0x8c820f48  lw          $v0, 0xF48($a0)
    ctx->pc = 0x1b22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3912)));
    // 0x1b22fc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x1b22fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2300: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B2300u;
    {
        const bool branch_taken_0x1b2300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2300) {
            ctx->pc = 0x1B22C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b22c0;
        }
    }
    ctx->pc = 0x1B2308u;
label_1b2308:
    // 0x1b2308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b230c:
    // 0x1b230c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B230Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2314u;
}
