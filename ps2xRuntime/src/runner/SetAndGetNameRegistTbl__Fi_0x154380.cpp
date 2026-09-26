#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAndGetNameRegistTbl__Fi
// Address: 0x154380 - 0x154478
void SetAndGetNameRegistTbl__Fi_0x154380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAndGetNameRegistTbl__Fi_0x154380");
#endif

    switch (ctx->pc) {
        case 0x1543c8u: goto label_1543c8;
        case 0x15442cu: goto label_15442c;
        default: break;
    }

    ctx->pc = 0x154380u;

    // 0x154380: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154380u;
    {
        const bool branch_taken_0x154380 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x154384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154380u;
            // 0x154384: 0x28820006  slti        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154380) {
            ctx->pc = 0x154390u;
            goto label_154390;
        }
    }
    ctx->pc = 0x154388u;
    // 0x154388: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x154388u;
    {
        const bool branch_taken_0x154388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154388u;
            // 0x15438c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154388) {
            ctx->pc = 0x154470u;
            goto label_154470;
        }
    }
    ctx->pc = 0x154390u;
label_154390:
    // 0x154390: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154390u;
    {
        const bool branch_taken_0x154390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154390u;
            // 0x154394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154390) {
            ctx->pc = 0x1543A0u;
            goto label_1543a0;
        }
    }
    ctx->pc = 0x154398u;
    // 0x154398: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x154398u;
    {
        const bool branch_taken_0x154398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15439Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154398u;
            // 0x15439c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154398) {
            ctx->pc = 0x154470u;
            goto label_154470;
        }
    }
    ctx->pc = 0x1543A0u;
label_1543a0:
    // 0x1543a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1543a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543a4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1543a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1543a8: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1543a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1543ac: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1543acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1543b0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1543b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1543b4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x1543b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x1543b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1543b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1543bc: 0x2442f260  addiu       $v0, $v0, -0xDA0
    ctx->pc = 0x1543bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
    // 0x1543c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1543c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1543c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1543c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1543c8:
    // 0x1543c8: 0xe34021  addu        $t0, $a3, $v1
    ctx->pc = 0x1543c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1543cc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1543ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1543d0: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x1543d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1543d4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1543d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1543d8: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x1543d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1543dc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1543dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1543e0: 0xa5050004  sh          $a1, 0x4($t0)
    ctx->pc = 0x1543e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x1543e4: 0xa5050006  sh          $a1, 0x6($t0)
    ctx->pc = 0x1543e4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x1543e8: 0xa5050008  sh          $a1, 0x8($t0)
    ctx->pc = 0x1543e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x1543ec: 0xa505000a  sh          $a1, 0xA($t0)
    ctx->pc = 0x1543ecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x1543f0: 0xa505000c  sh          $a1, 0xC($t0)
    ctx->pc = 0x1543f0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1543f4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1543F4u;
    {
        const bool branch_taken_0x1543f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1543F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1543F4u;
            // 0x1543f8: 0xa505000e  sh          $a1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543f4) {
            ctx->pc = 0x1543C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1543c8;
        }
    }
    ctx->pc = 0x1543FCu;
    // 0x1543fc: 0x28c1000b  slti        $at, $a2, 0xB
    ctx->pc = 0x1543fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x154400: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x154400u;
    {
        const bool branch_taken_0x154400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154400u;
            // 0x154404: 0x63840  sll         $a3, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154400) {
            ctx->pc = 0x15444Cu;
            goto label_15444c;
        }
    }
    ctx->pc = 0x154408u;
    // 0x154408: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x154408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15440c: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x15440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x154410: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x154414: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x154414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154418: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x154418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x15441c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15441cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154420: 0x2442f260  addiu       $v0, $v0, -0xDA0
    ctx->pc = 0x154420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
    // 0x154424: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x154424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154428: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x154428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15442c:
    // 0x15442c: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x15442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x154430: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x154430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x154434: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x154434u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x154438: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x154438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x15443c: 0x28c2000b  slti        $v0, $a2, 0xB
    ctx->pc = 0x15443cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x154440: 0x0  nop
    ctx->pc = 0x154440u;
    // NOP
    // 0x154444: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x154444u;
    {
        const bool branch_taken_0x154444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154444) {
            ctx->pc = 0x15442Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15442c;
        }
    }
    ctx->pc = 0x15444Cu;
label_15444c:
    // 0x15444c: 0x0  nop
    ctx->pc = 0x15444cu;
    // NOP
    // 0x154450: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x154450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x154454: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x154454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x154458: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x154458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15445c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x15445cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x154460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154464: 0x2442f260  addiu       $v0, $v0, -0xDA0
    ctx->pc = 0x154464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
    // 0x154468: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x154468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15446c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154470:
    // 0x154470: 0x3e00008  jr          $ra
    ctx->pc = 0x154470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154478u;
}
