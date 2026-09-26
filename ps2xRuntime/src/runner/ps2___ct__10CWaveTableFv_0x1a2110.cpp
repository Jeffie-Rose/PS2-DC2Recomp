#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10CWaveTableFv
// Address: 0x1a2110 - 0x1a21a0
void ps2___ct__10CWaveTableFv_0x1a2110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10CWaveTableFv_0x1a2110");
#endif

    switch (ctx->pc) {
        case 0x1a2124u: goto label_1a2124;
        case 0x1a2130u: goto label_1a2130;
        default: break;
    }

    ctx->pc = 0x1a2110u;

    // 0x1a2110: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a2110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a2114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2118: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x1a2118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x1a211c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a211cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2120: 0xac821204  sw          $v0, 0x1204($a0)
    ctx->pc = 0x1a2120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4612), GPR_U32(ctx, 2));
label_1a2124:
    // 0x1a2124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a212c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1a212cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1a2130:
    // 0x1a2130: 0x674821  addu        $t1, $v1, $a3
    ctx->pc = 0x1a2130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a2134: 0xad200900  sw          $zero, 0x900($t1)
    ctx->pc = 0x1a2134u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2304), GPR_U32(ctx, 0));
    // 0x1a2138: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1a2138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1a213c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1a213cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1a2140: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1a2140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1a2144: 0xad200904  sw          $zero, 0x904($t1)
    ctx->pc = 0x1a2144u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2308), GPR_U32(ctx, 0));
    // 0x1a2148: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1a2148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1a214c: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1a214cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x1a2150: 0xad200908  sw          $zero, 0x908($t1)
    ctx->pc = 0x1a2150u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2312), GPR_U32(ctx, 0));
    // 0x1a2154: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x1a2154u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x1a2158: 0xad20090c  sw          $zero, 0x90C($t1)
    ctx->pc = 0x1a2158u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2316), GPR_U32(ctx, 0));
    // 0x1a215c: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x1a215cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x1a2160: 0xad200910  sw          $zero, 0x910($t1)
    ctx->pc = 0x1a2160u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2320), GPR_U32(ctx, 0));
    // 0x1a2164: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x1a2164u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
    // 0x1a2168: 0xad200914  sw          $zero, 0x914($t1)
    ctx->pc = 0x1a2168u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2324), GPR_U32(ctx, 0));
    // 0x1a216c: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x1a216cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
    // 0x1a2170: 0xad200918  sw          $zero, 0x918($t1)
    ctx->pc = 0x1a2170u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2328), GPR_U32(ctx, 0));
    // 0x1a2174: 0xad200018  sw          $zero, 0x18($t1)
    ctx->pc = 0x1a2174u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 0));
    // 0x1a2178: 0xad20091c  sw          $zero, 0x91C($t1)
    ctx->pc = 0x1a2178u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2332), GPR_U32(ctx, 0));
    // 0x1a217c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A217Cu;
    {
        const bool branch_taken_0x1a217c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A217Cu;
            // 0x1a2180: 0xad20001c  sw          $zero, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a217c) {
            ctx->pc = 0x1A2130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2130;
        }
    }
    ctx->pc = 0x1A2184u;
    // 0x1a2184: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a2184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a2188: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x1a2188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1a218c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1A218Cu;
    {
        const bool branch_taken_0x1a218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A218Cu;
            // 0x1a2190: 0x25080060  addiu       $t0, $t0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a218c) {
            ctx->pc = 0x1A2124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2124;
        }
    }
    ctx->pc = 0x1A2194u;
    // 0x1a2194: 0xac801200  sw          $zero, 0x1200($a0)
    ctx->pc = 0x1a2194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4608), GPR_U32(ctx, 0));
    // 0x1a2198: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2198u;
            // 0x1a219c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A21A0u;
}
