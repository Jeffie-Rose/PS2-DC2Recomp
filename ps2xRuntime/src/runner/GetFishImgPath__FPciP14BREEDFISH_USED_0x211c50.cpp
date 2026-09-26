#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishImgPath__FPciP14BREEDFISH_USED
// Address: 0x211c50 - 0x211cd4
void GetFishImgPath__FPciP14BREEDFISH_USED_0x211c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishImgPath__FPciP14BREEDFISH_USED_0x211c50");
#endif

    switch (ctx->pc) {
        case 0x211c8cu: goto label_211c8c;
        case 0x211ca8u: goto label_211ca8;
        default: break;
    }

    ctx->pc = 0x211c50u;

    // 0x211c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211c54: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211C54u;
    {
        const bool branch_taken_0x211c54 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x211C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C54u;
            // 0x211c58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c54) {
            ctx->pc = 0x211C64u;
            goto label_211c64;
        }
    }
    ctx->pc = 0x211C5Cu;
    // 0x211c5c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x211C5Cu;
    {
        const bool branch_taken_0x211c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C5Cu;
            // 0x211c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c5c) {
            ctx->pc = 0x211CC8u;
            goto label_211cc8;
        }
    }
    ctx->pc = 0x211C64u;
label_211c64:
    // 0x211c64: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x211C64u;
    {
        const bool branch_taken_0x211c64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x211C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C64u;
            // 0x211c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c64) {
            ctx->pc = 0x211C74u;
            goto label_211c74;
        }
    }
    ctx->pc = 0x211C6Cu;
    // 0x211c6c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x211C6Cu;
    {
        const bool branch_taken_0x211c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C6Cu;
            // 0x211c70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c6c) {
            ctx->pc = 0x211CCCu;
            goto label_211ccc;
        }
    }
    ctx->pc = 0x211C74u;
label_211c74:
    // 0x211c74: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211C74u;
    {
        const bool branch_taken_0x211c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x211C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C74u;
            // 0x211c78: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c74) {
            ctx->pc = 0x211C84u;
            goto label_211c84;
        }
    }
    ctx->pc = 0x211C7Cu;
    // 0x211c7c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x211C7Cu;
    {
        const bool branch_taken_0x211c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C7Cu;
            // 0x211c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c7c) {
            ctx->pc = 0x211CC8u;
            goto label_211cc8;
        }
    }
    ctx->pc = 0x211C84u;
label_211c84:
    // 0x211c84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x211C84u;
    {
        const bool branch_taken_0x211c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C84u;
            // 0x211c88: 0x2442f980  addiu       $v0, $v0, -0x680 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c84) {
            ctx->pc = 0x211CB4u;
            goto label_211cb4;
        }
    }
    ctx->pc = 0x211C8Cu;
label_211c8c:
    // 0x211c8c: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x211C8Cu;
    {
        const bool branch_taken_0x211c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x211c8c) {
            ctx->pc = 0x211CB0u;
            goto label_211cb0;
        }
    }
    ctx->pc = 0x211C94u;
    // 0x211c94: 0x90c7003a  lbu         $a3, 0x3A($a2)
    ctx->pc = 0x211c94u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 58)));
    // 0x211c98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x211c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x211c9c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x211c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x211ca0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x211CA0u;
    SET_GPR_U32(ctx, 31, 0x211CA8u);
    ctx->pc = 0x211CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211CA0u;
            // 0x211ca4: 0x24a59f00  addiu       $a1, $a1, -0x6100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CA8u; }
        if (ctx->pc != 0x211CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211CA8u; }
        if (ctx->pc != 0x211CA8u) { return; }
    }
    ctx->pc = 0x211CA8u;
label_211ca8:
    // 0x211ca8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x211CA8u;
    {
        const bool branch_taken_0x211ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211CA8u;
            // 0x211cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ca8) {
            ctx->pc = 0x211CC8u;
            goto label_211cc8;
        }
    }
    ctx->pc = 0x211CB0u;
label_211cb0:
    // 0x211cb0: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x211cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_211cb4:
    // 0x211cb4: 0x0  nop
    ctx->pc = 0x211cb4u;
    // NOP
    // 0x211cb8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x211cb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211cbc: 0x1c60fff3  bgtz        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x211CBCu;
    {
        const bool branch_taken_0x211cbc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x211cbc) {
            ctx->pc = 0x211C8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211c8c;
        }
    }
    ctx->pc = 0x211CC4u;
    // 0x211cc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211cc8:
    // 0x211cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_211ccc:
    // 0x211ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x211CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211CCCu;
            // 0x211cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211CD4u;
}
