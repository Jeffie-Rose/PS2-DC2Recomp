#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAquariumFish0__Fi
// Address: 0x1a12e0 - 0x1a1364
void GetAquariumFish0__Fi_0x1a12e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAquariumFish0__Fi_0x1a12e0");
#endif

    switch (ctx->pc) {
        case 0x1a12f4u: goto label_1a12f4;
        case 0x1a134cu: goto label_1a134c;
        default: break;
    }

    ctx->pc = 0x1a12e0u;

    // 0x1a12e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a12e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a12e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a12e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a12e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a12e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a12ec: 0xc065b18  jal         func_196C60
    ctx->pc = 0x1A12ECu;
    SET_GPR_U32(ctx, 31, 0x1A12F4u);
    ctx->pc = 0x1A12F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12ECu;
            // 0x1a12f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196C60u;
    if (runtime->hasFunction(0x196C60u)) {
        auto targetFn = runtime->lookupFunction(0x196C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12F4u; }
        if (ctx->pc != 0x1A12F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumData__Fv_0x196c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12F4u; }
        if (ctx->pc != 0x1A12F4u) { return; }
    }
    ctx->pc = 0x1A12F4u;
label_1a12f4:
    // 0x1a12f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A12F4u;
    {
        const bool branch_taken_0x1a12f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a12f4) {
            ctx->pc = 0x1A1304u;
            goto label_1a1304;
        }
    }
    ctx->pc = 0x1A12FCu;
    // 0x1a12fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A12FCu;
    {
        const bool branch_taken_0x1a12fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12FCu;
            // 0x1a1300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12fc) {
            ctx->pc = 0x1A1354u;
            goto label_1a1354;
        }
    }
    ctx->pc = 0x1A1304u;
label_1a1304:
    // 0x1a1304: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1304u;
    {
        const bool branch_taken_0x1a1304 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1A1308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1304u;
            // 0x1a1308: 0x2a030006  slti        $v1, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1304) {
            ctx->pc = 0x1A1314u;
            goto label_1a1314;
        }
    }
    ctx->pc = 0x1A130Cu;
    // 0x1a130c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A130Cu;
    {
        const bool branch_taken_0x1a130c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A130Cu;
            // 0x1a1310: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a130c) {
            ctx->pc = 0x1A131Cu;
            goto label_1a131c;
        }
    }
    ctx->pc = 0x1A1314u;
label_1a1314:
    // 0x1a1314: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A1314u;
    {
        const bool branch_taken_0x1a1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1314u;
            // 0x1a1318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1314) {
            ctx->pc = 0x1A1354u;
            goto label_1a1354;
        }
    }
    ctx->pc = 0x1A131Cu;
label_1a131c:
    // 0x1a131c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1320: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a1320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a1324: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a1324u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a1328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a1328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a132c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1330: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x1a1330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1a1334: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1a1334u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a1338: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1338u;
    {
        const bool branch_taken_0x1a1338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1338u;
            // 0x1a133c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1338) {
            ctx->pc = 0x1A1354u;
            goto label_1a1354;
        }
    }
    ctx->pc = 0x1A1340u;
    // 0x1a1340: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1a1340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a1344: 0xc065dc0  jal         func_197700
    ctx->pc = 0x1A1344u;
    SET_GPR_U32(ctx, 31, 0x1A134Cu);
    ctx->pc = 0x1A1348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1344u;
            // 0x1a1348: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A134Cu; }
        if (ctx->pc != 0x1A134Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A134Cu; }
        if (ctx->pc != 0x1A134Cu) { return; }
    }
    ctx->pc = 0x1A134Cu;
label_1a134c:
    // 0x1a134c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1A134Cu;
    {
        const bool branch_taken_0x1a134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a134c) {
            ctx->pc = 0x1A1354u;
            goto label_1a1354;
        }
    }
    ctx->pc = 0x1A1354u;
label_1a1354:
    // 0x1a1354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a135c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A135Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A135Cu;
            // 0x1a1360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1364u;
}
