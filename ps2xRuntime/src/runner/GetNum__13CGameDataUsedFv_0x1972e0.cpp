#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNum__13CGameDataUsedFv
// Address: 0x1972e0 - 0x19735c
void GetNum__13CGameDataUsedFv_0x1972e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNum__13CGameDataUsedFv_0x1972e0");
#endif

    ctx->pc = 0x1972e0u;

    // 0x1972e0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x1972e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1972e4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1972E4u;
    {
        const bool branch_taken_0x1972e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1972E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1972E4u;
            // 0x1972e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972e4) {
            ctx->pc = 0x1972F4u;
            goto label_1972f4;
        }
    }
    ctx->pc = 0x1972ECu;
    // 0x1972ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1972ECu;
    {
        const bool branch_taken_0x1972ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1972ec) {
            ctx->pc = 0x197354u;
            goto label_197354;
        }
    }
    ctx->pc = 0x1972F4u;
label_1972f4:
    // 0x1972f4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1972f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1972f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1972f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1972fc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1972FCu;
    {
        const bool branch_taken_0x1972fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1972FCu;
            // 0x197300: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972fc) {
            ctx->pc = 0x197324u;
            goto label_197324;
        }
    }
    ctx->pc = 0x197304u;
    // 0x197304: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197304u;
    {
        const bool branch_taken_0x197304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197304u;
            // 0x197308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197304) {
            ctx->pc = 0x19731Cu;
            goto label_19731c;
        }
    }
    ctx->pc = 0x19730Cu;
    // 0x19730c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19730Cu;
    {
        const bool branch_taken_0x19730c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19730c) {
            ctx->pc = 0x19731Cu;
            goto label_19731c;
        }
    }
    ctx->pc = 0x197314u;
    // 0x197314: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x197314u;
    {
        const bool branch_taken_0x197314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197314) {
            ctx->pc = 0x197354u;
            goto label_197354;
        }
    }
    ctx->pc = 0x19731Cu;
label_19731c:
    // 0x19731c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19731Cu;
    {
        const bool branch_taken_0x19731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19731Cu;
            // 0x197320: 0x84820010  lh          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19731c) {
            ctx->pc = 0x197354u;
            goto label_197354;
        }
    }
    ctx->pc = 0x197324u;
label_197324:
    // 0x197324: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x197324u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x197328: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x197328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x19732c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19732Cu;
    {
        const bool branch_taken_0x19732c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19732Cu;
            // 0x197330: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19732c) {
            ctx->pc = 0x19733Cu;
            goto label_19733c;
        }
    }
    ctx->pc = 0x197334u;
    // 0x197334: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x197334u;
    {
        const bool branch_taken_0x197334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197334u;
            // 0x197338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197334) {
            ctx->pc = 0x197354u;
            goto label_197354;
        }
    }
    ctx->pc = 0x19733Cu;
label_19733c:
    // 0x19733c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19733Cu;
    {
        const bool branch_taken_0x19733c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19733Cu;
            // 0x197340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19733c) {
            ctx->pc = 0x19734Cu;
            goto label_19734c;
        }
    }
    ctx->pc = 0x197344u;
    // 0x197344: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x197344u;
    {
        const bool branch_taken_0x197344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197344) {
            ctx->pc = 0x197354u;
            goto label_197354;
        }
    }
    ctx->pc = 0x19734Cu;
label_19734c:
    // 0x19734c: 0x8482004a  lh          $v0, 0x4A($a0)
    ctx->pc = 0x19734cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 74)));
    // 0x197350: 0x0  nop
    ctx->pc = 0x197350u;
    // NOP
label_197354:
    // 0x197354: 0x3e00008  jr          $ra
    ctx->pc = 0x197354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19735Cu;
}
