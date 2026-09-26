#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EventViewLoop__Fv
// Address: 0x2d3920 - 0x2d3c08
void EventViewLoop__Fv_0x2d3920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventViewLoop__Fv_0x2d3920");
#endif

    switch (ctx->pc) {
        case 0x2d394cu: goto label_2d394c;
        case 0x2d39b4u: goto label_2d39b4;
        case 0x2d39fcu: goto label_2d39fc;
        case 0x2d3a18u: goto label_2d3a18;
        case 0x2d3a2cu: goto label_2d3a2c;
        case 0x2d3a3cu: goto label_2d3a3c;
        case 0x2d3a5cu: goto label_2d3a5c;
        case 0x2d3a7cu: goto label_2d3a7c;
        case 0x2d3a9cu: goto label_2d3a9c;
        case 0x2d3b44u: goto label_2d3b44;
        case 0x2d3b5cu: goto label_2d3b5c;
        case 0x2d3bb4u: goto label_2d3bb4;
        case 0x2d3bc4u: goto label_2d3bc4;
        case 0x2d3be0u: goto label_2d3be0;
        default: break;
    }

    ctx->pc = 0x2d3920u;

    // 0x2d3920: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x2d3920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x2d3924: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d3924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d3928: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d3928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d392c: 0x24a50670  addiu       $a1, $a1, 0x670
    ctx->pc = 0x2d392cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1648));
    // 0x2d3930: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d3930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d3934: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d3934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d3938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d393c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d3940: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2d3940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d3944: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D3944u;
    SET_GPR_U32(ctx, 31, 0x2D394Cu);
    ctx->pc = 0x2D3948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3944u;
            // 0x2d3948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D394Cu; }
        if (ctx->pc != 0x2D394Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D394Cu; }
        if (ctx->pc != 0x2D394Cu) { return; }
    }
    ctx->pc = 0x2D394Cu;
label_2d394c:
    // 0x2d394c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d394cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d3950: 0x8f829e08  lw          $v0, -0x61F8($gp)
    ctx->pc = 0x2d3950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942216)));
    // 0x2d3954: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3954u;
    {
        const bool branch_taken_0x2d3954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3954) {
            ctx->pc = 0x2D3978u;
            goto label_2d3978;
        }
    }
    ctx->pc = 0x2D395Cu;
    // 0x2d395c: 0x8f829e04  lw          $v0, -0x61FC($gp)
    ctx->pc = 0x2d395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942212)));
    // 0x2d3960: 0x8f839dfc  lw          $v1, -0x6204($gp)
    ctx->pc = 0x2d3960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942204)));
    // 0x2d3964: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2d3964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d3968: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3968u;
    {
        const bool branch_taken_0x2d3968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3968) {
            ctx->pc = 0x2D3974u;
            goto label_2d3974;
        }
    }
    ctx->pc = 0x2D3970u;
    // 0x2d3970: 0xaf839e04  sw          $v1, -0x61FC($gp)
    ctx->pc = 0x2d3970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942212), GPR_U32(ctx, 3));
label_2d3974:
    // 0x2d3974: 0xaf809e08  sw          $zero, -0x61F8($gp)
    ctx->pc = 0x2d3974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942216), GPR_U32(ctx, 0));
label_2d3978:
    // 0x2d3978: 0x8f939e04  lw          $s3, -0x61FC($gp)
    ctx->pc = 0x2d3978u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942212)));
    // 0x2d397c: 0x27a304a8  addiu       $v1, $sp, 0x4A8
    ctx->pc = 0x2d397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1192));
    // 0x2d3980: 0xdf828548  ld          $v0, -0x7AB8($gp)
    ctx->pc = 0x2d3980u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935880)));
    // 0x2d3984: 0x2671000a  addiu       $s1, $s3, 0xA
    ctx->pc = 0x2d3984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
    // 0x2d3988: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d3988u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2d398c: 0x8f839df8  lw          $v1, -0x6208($gp)
    ctx->pc = 0x2d398cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942200)));
    // 0x2d3990: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x2d3990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d3994: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3994u;
    {
        const bool branch_taken_0x2d3994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3994u;
            // 0x2d3998: 0x271082a  slt         $at, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3994) {
            ctx->pc = 0x2D39A4u;
            goto label_2d39a4;
        }
    }
    ctx->pc = 0x2D399Cu;
    // 0x2d399c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2d399cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39a0: 0x271082a  slt         $at, $s3, $s1
    ctx->pc = 0x2d39a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d39a4:
    // 0x2d39a4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D39A4u;
    {
        const bool branch_taken_0x2d39a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D39A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D39A4u;
            // 0x2d39a8: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39a4) {
            ctx->pc = 0x2D3A10u;
            goto label_2d3a10;
        }
    }
    ctx->pc = 0x2D39ACu;
    // 0x2d39ac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2d39acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d39b0: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x2d39b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d39b4:
    // 0x2d39b4: 0x8f829df4  lw          $v0, -0x620C($gp)
    ctx->pc = 0x2d39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942196)));
    // 0x2d39b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d39bc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2d39bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d39c0: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2D39C0u;
    {
        const bool branch_taken_0x2d39c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d39c0) {
            ctx->pc = 0x2D3A00u;
            goto label_2d3a00;
        }
    }
    ctx->pc = 0x2D39C8u;
    // 0x2d39c8: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x2d39c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d39cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d39ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d39d0: 0x8f839e04  lw          $v1, -0x61FC($gp)
    ctx->pc = 0x2d39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942212)));
    // 0x2d39d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d39d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39d8: 0x8f829e00  lw          $v0, -0x6200($gp)
    ctx->pc = 0x2d39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942208)));
    // 0x2d39dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d39e0: 0x2621026  xor         $v0, $s3, $v0
    ctx->pc = 0x2d39e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 2));
    // 0x2d39e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d39e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d39e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d39ec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2d39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d39f0: 0x8c4604a8  lw          $a2, 0x4A8($v0)
    ctx->pc = 0x2d39f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1192)));
    // 0x2d39f4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D39F4u;
    SET_GPR_U32(ctx, 31, 0x2D39FCu);
    ctx->pc = 0x2D39F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D39F4u;
            // 0x2d39f8: 0x24a50680  addiu       $a1, $a1, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D39FCu; }
        if (ctx->pc != 0x2D39FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D39FCu; }
        if (ctx->pc != 0x2D39FCu) { return; }
    }
    ctx->pc = 0x2D39FCu;
label_2d39fc:
    // 0x2d39fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d39fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2d3a00:
    // 0x2d3a00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d3a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d3a04: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x2d3a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d3a08: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2D3A08u;
    {
        const bool branch_taken_0x2d3a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3A08u;
            // 0x2d3a0c: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a08) {
            ctx->pc = 0x2D39B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d39b4;
        }
    }
    ctx->pc = 0x2D3A10u;
label_2d3a10:
    // 0x2d3a10: 0xc064210  jal         func_190840
    ctx->pc = 0x2D3A10u;
    SET_GPR_U32(ctx, 31, 0x2D3A18u);
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A18u; }
        if (ctx->pc != 0x2D3A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugFont__Fv_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A18u; }
        if (ctx->pc != 0x2D3A18u) { return; }
    }
    ctx->pc = 0x2D3A18u;
label_2d3a18:
    // 0x2d3a18: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2d3a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d3a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d3a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3a20: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d3a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d3a24: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2D3A24u;
    SET_GPR_U32(ctx, 31, 0x2D3A2Cu);
    ctx->pc = 0x2D3A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3A24u;
            // 0x2d3a28: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A2Cu; }
        if (ctx->pc != 0x2D3A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A2Cu; }
        if (ctx->pc != 0x2D3A2Cu) { return; }
    }
    ctx->pc = 0x2D3A2Cu;
label_2d3a2c:
    // 0x2d3a2c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d3a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d3a30: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2d3a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2d3a34: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3A34u;
    SET_GPR_U32(ctx, 31, 0x2D3A3Cu);
    ctx->pc = 0x2D3A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3A34u;
            // 0x2d3a38: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A3Cu; }
        if (ctx->pc != 0x2D3A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A3Cu; }
        if (ctx->pc != 0x2D3A3Cu) { return; }
    }
    ctx->pc = 0x2D3A3Cu;
label_2d3a3c:
    // 0x2d3a3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3A3Cu;
    {
        const bool branch_taken_0x2d3a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3A3Cu;
            // 0x2d3a40: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a3c) {
            ctx->pc = 0x2D3A50u;
            goto label_2d3a50;
        }
    }
    ctx->pc = 0x2D3A44u;
    // 0x2d3a44: 0x8f829e00  lw          $v0, -0x6200($gp)
    ctx->pc = 0x2d3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942208)));
    // 0x2d3a48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d3a4c: 0xaf829e00  sw          $v0, -0x6200($gp)
    ctx->pc = 0x2d3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942208), GPR_U32(ctx, 2));
label_2d3a50:
    // 0x2d3a50: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2d3a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d3a54: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3A54u;
    SET_GPR_U32(ctx, 31, 0x2D3A5Cu);
    ctx->pc = 0x2D3A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3A54u;
            // 0x2d3a58: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A5Cu; }
        if (ctx->pc != 0x2D3A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A5Cu; }
        if (ctx->pc != 0x2D3A5Cu) { return; }
    }
    ctx->pc = 0x2D3A5Cu;
label_2d3a5c:
    // 0x2d3a5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3A5Cu;
    {
        const bool branch_taken_0x2d3a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3A5Cu;
            // 0x2d3a60: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a5c) {
            ctx->pc = 0x2D3A70u;
            goto label_2d3a70;
        }
    }
    ctx->pc = 0x2D3A64u;
    // 0x2d3a64: 0x8f829e00  lw          $v0, -0x6200($gp)
    ctx->pc = 0x2d3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942208)));
    // 0x2d3a68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3a6c: 0xaf829e00  sw          $v0, -0x6200($gp)
    ctx->pc = 0x2d3a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942208), GPR_U32(ctx, 2));
label_2d3a70:
    // 0x2d3a70: 0x34058004  ori         $a1, $zero, 0x8004
    ctx->pc = 0x2d3a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x2d3a74: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3A74u;
    SET_GPR_U32(ctx, 31, 0x2D3A7Cu);
    ctx->pc = 0x2D3A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3A74u;
            // 0x2d3a78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A7Cu; }
        if (ctx->pc != 0x2D3A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A7Cu; }
        if (ctx->pc != 0x2D3A7Cu) { return; }
    }
    ctx->pc = 0x2D3A7Cu;
label_2d3a7c:
    // 0x2d3a7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3A7Cu;
    {
        const bool branch_taken_0x2d3a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3A7Cu;
            // 0x2d3a80: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a7c) {
            ctx->pc = 0x2D3A90u;
            goto label_2d3a90;
        }
    }
    ctx->pc = 0x2D3A84u;
    // 0x2d3a84: 0x8f829e04  lw          $v0, -0x61FC($gp)
    ctx->pc = 0x2d3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942212)));
    // 0x2d3a88: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x2d3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x2d3a8c: 0xaf829e04  sw          $v0, -0x61FC($gp)
    ctx->pc = 0x2d3a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942212), GPR_U32(ctx, 2));
label_2d3a90:
    // 0x2d3a90: 0x24052008  addiu       $a1, $zero, 0x2008
    ctx->pc = 0x2d3a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x2d3a94: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3A94u;
    SET_GPR_U32(ctx, 31, 0x2D3A9Cu);
    ctx->pc = 0x2D3A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3A94u;
            // 0x2d3a98: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A9Cu; }
        if (ctx->pc != 0x2D3A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3A9Cu; }
        if (ctx->pc != 0x2D3A9Cu) { return; }
    }
    ctx->pc = 0x2D3A9Cu;
label_2d3a9c:
    // 0x2d3a9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3A9Cu;
    {
        const bool branch_taken_0x2d3a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3a9c) {
            ctx->pc = 0x2D3AB0u;
            goto label_2d3ab0;
        }
    }
    ctx->pc = 0x2D3AA4u;
    // 0x2d3aa4: 0x8f829e04  lw          $v0, -0x61FC($gp)
    ctx->pc = 0x2d3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942212)));
    // 0x2d3aa8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2d3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2d3aac: 0xaf829e04  sw          $v0, -0x61FC($gp)
    ctx->pc = 0x2d3aacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942212), GPR_U32(ctx, 2));
label_2d3ab0:
    // 0x2d3ab0: 0x8f829e04  lw          $v0, -0x61FC($gp)
    ctx->pc = 0x2d3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942212)));
    // 0x2d3ab4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3AB4u;
    {
        const bool branch_taken_0x2d3ab4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d3ab4) {
            ctx->pc = 0x2D3AC0u;
            goto label_2d3ac0;
        }
    }
    ctx->pc = 0x2D3ABCu;
    // 0x2d3abc: 0xaf809e04  sw          $zero, -0x61FC($gp)
    ctx->pc = 0x2d3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942212), GPR_U32(ctx, 0));
label_2d3ac0:
    // 0x2d3ac0: 0x8f849df8  lw          $a0, -0x6208($gp)
    ctx->pc = 0x2d3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942200)));
    // 0x2d3ac4: 0x8f839e04  lw          $v1, -0x61FC($gp)
    ctx->pc = 0x2d3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942212)));
    // 0x2d3ac8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2d3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d3acc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2d3accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3ad0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3AD0u;
    {
        const bool branch_taken_0x2d3ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3AD0u;
            // 0x2d3ad4: 0x2462fff6  addiu       $v0, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ad0) {
            ctx->pc = 0x2D3ADCu;
            goto label_2d3adc;
        }
    }
    ctx->pc = 0x2D3AD8u;
    // 0x2d3ad8: 0xaf829e04  sw          $v0, -0x61FC($gp)
    ctx->pc = 0x2d3ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942212), GPR_U32(ctx, 2));
label_2d3adc:
    // 0x2d3adc: 0x8f829e00  lw          $v0, -0x6200($gp)
    ctx->pc = 0x2d3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942208)));
    // 0x2d3ae0: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3AE0u;
    {
        const bool branch_taken_0x2d3ae0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d3ae0) {
            ctx->pc = 0x2D3B0Cu;
            goto label_2d3b0c;
        }
    }
    ctx->pc = 0x2D3AE8u;
    // 0x2d3ae8: 0x8f839e04  lw          $v1, -0x61FC($gp)
    ctx->pc = 0x2d3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942212)));
    // 0x2d3aec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2d3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d3af0: 0xaf829e00  sw          $v0, -0x6200($gp)
    ctx->pc = 0x2d3af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942208), GPR_U32(ctx, 2));
    // 0x2d3af4: 0x24620009  addiu       $v0, $v1, 0x9
    ctx->pc = 0x2d3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x2d3af8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d3af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d3afc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3AFCu;
    {
        const bool branch_taken_0x2d3afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3AFCu;
            // 0x2d3b00: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3afc) {
            ctx->pc = 0x2D3B0Cu;
            goto label_2d3b0c;
        }
    }
    ctx->pc = 0x2D3B04u;
    // 0x2d3b04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d3b08: 0xaf829e00  sw          $v0, -0x6200($gp)
    ctx->pc = 0x2d3b08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942208), GPR_U32(ctx, 2));
label_2d3b0c:
    // 0x2d3b0c: 0x8f839e00  lw          $v1, -0x6200($gp)
    ctx->pc = 0x2d3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942208)));
    // 0x2d3b10: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x2d3b10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2d3b14: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3B14u;
    {
        const bool branch_taken_0x2d3b14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b14) {
            ctx->pc = 0x2D3B30u;
            goto label_2d3b30;
        }
    }
    ctx->pc = 0x2D3B1Cu;
    // 0x2d3b1c: 0x8f829e04  lw          $v0, -0x61FC($gp)
    ctx->pc = 0x2d3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942212)));
    // 0x2d3b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3b24: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d3b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d3b28: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3B28u;
    {
        const bool branch_taken_0x2d3b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b28) {
            ctx->pc = 0x2D3B34u;
            goto label_2d3b34;
        }
    }
    ctx->pc = 0x2D3B30u;
label_2d3b30:
    // 0x2d3b30: 0xaf809e00  sw          $zero, -0x6200($gp)
    ctx->pc = 0x2d3b30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942208), GPR_U32(ctx, 0));
label_2d3b34:
    // 0x2d3b34: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d3b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d3b38: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d3b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d3b3c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3B3Cu;
    SET_GPR_U32(ctx, 31, 0x2D3B44u);
    ctx->pc = 0x2D3B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3B3Cu;
            // 0x2d3b40: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3B44u; }
        if (ctx->pc != 0x2D3B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3B44u; }
        if (ctx->pc != 0x2D3B44u) { return; }
    }
    ctx->pc = 0x2D3B44u;
label_2d3b44:
    // 0x2d3b44: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D3B44u;
    {
        const bool branch_taken_0x2d3b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b44) {
            ctx->pc = 0x2D3BD0u;
            goto label_2d3bd0;
        }
    }
    ctx->pc = 0x2D3B4Cu;
    // 0x2d3b4c: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x2d3b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    // 0x2d3b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b54: 0xc049c86  jal         func_127218
    ctx->pc = 0x2D3B54u;
    SET_GPR_U32(ctx, 31, 0x2D3B5Cu);
    ctx->pc = 0x2D3B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3B54u;
            // 0x2d3b58: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3B5Cu; }
        if (ctx->pc != 0x2D3B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3B5Cu; }
        if (ctx->pc != 0x2D3B5Cu) { return; }
    }
    ctx->pc = 0x2D3B5Cu;
label_2d3b5c:
    // 0x2d3b5c: 0x8f849e04  lw          $a0, -0x61FC($gp)
    ctx->pc = 0x2d3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942212)));
    // 0x2d3b60: 0x8f839e00  lw          $v1, -0x6200($gp)
    ctx->pc = 0x2d3b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942208)));
    // 0x2d3b64: 0x8f829df4  lw          $v0, -0x620C($gp)
    ctx->pc = 0x2d3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942196)));
    // 0x2d3b68: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d3b6c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2d3b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2d3b70: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2d3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d3b74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d3b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d3b78: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3b7c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d3b80: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D3B80u;
    {
        const bool branch_taken_0x2d3b80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d3b80) {
            ctx->pc = 0x2D3BD0u;
            goto label_2d3bd0;
        }
    }
    ctx->pc = 0x2D3B88u;
    // 0x2d3b88: 0xafa20450  sw          $v0, 0x450($sp)
    ctx->pc = 0x2d3b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
    // 0x2d3b8c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2d3b90: 0xafa20494  sw          $v0, 0x494($sp)
    ctx->pc = 0x2d3b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 2));
    // 0x2d3b94: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d3b98: 0xafa20498  sw          $v0, 0x498($sp)
    ctx->pc = 0x2d3b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 2));
    // 0x2d3b9c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2d3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2d3ba0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3BA0u;
    {
        const bool branch_taken_0x2d3ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3BA0u;
            // 0x2d3ba4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ba0) {
            ctx->pc = 0x2D3BBCu;
            goto label_2d3bbc;
        }
    }
    ctx->pc = 0x2D3BA8u;
    // 0x2d3ba8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d3ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3bac: 0xc064240  jal         func_190900
    ctx->pc = 0x2D3BACu;
    SET_GPR_U32(ctx, 31, 0x2D3BB4u);
    ctx->pc = 0x2D3BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3BACu;
            // 0x2d3bb0: 0x27a50450  addiu       $a1, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3BB4u; }
        if (ctx->pc != 0x2D3BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3BB4u; }
        if (ctx->pc != 0x2D3BB4u) { return; }
    }
    ctx->pc = 0x2D3BB4u;
label_2d3bb4:
    // 0x2d3bb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3BB4u;
    {
        const bool branch_taken_0x2d3bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3BB4u;
            // 0x2d3bb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3bb4) {
            ctx->pc = 0x2D3BC8u;
            goto label_2d3bc8;
        }
    }
    ctx->pc = 0x2D3BBCu;
label_2d3bbc:
    // 0x2d3bbc: 0xc064240  jal         func_190900
    ctx->pc = 0x2D3BBCu;
    SET_GPR_U32(ctx, 31, 0x2D3BC4u);
    ctx->pc = 0x2D3BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3BBCu;
            // 0x2d3bc0: 0x27a50450  addiu       $a1, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3BC4u; }
        if (ctx->pc != 0x2D3BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3BC4u; }
        if (ctx->pc != 0x2D3BC4u) { return; }
    }
    ctx->pc = 0x2D3BC4u;
label_2d3bc4:
    // 0x2d3bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3bc8:
    // 0x2d3bc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3BC8u;
    {
        const bool branch_taken_0x2d3bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3BC8u;
            // 0x2d3bcc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3bc8) {
            ctx->pc = 0x2D3BF0u;
            goto label_2d3bf0;
        }
    }
    ctx->pc = 0x2D3BD0u;
label_2d3bd0:
    // 0x2d3bd0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d3bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d3bd4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2d3bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d3bd8: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3BD8u;
    SET_GPR_U32(ctx, 31, 0x2D3BE0u);
    ctx->pc = 0x2D3BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3BD8u;
            // 0x2d3bdc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3BE0u; }
        if (ctx->pc != 0x2D3BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3BE0u; }
        if (ctx->pc != 0x2D3BE0u) { return; }
    }
    ctx->pc = 0x2D3BE0u;
label_2d3be0:
    // 0x2d3be0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3BE0u;
    {
        const bool branch_taken_0x2d3be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3BE0u;
            // 0x2d3be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3be0) {
            ctx->pc = 0x2D3BECu;
            goto label_2d3bec;
        }
    }
    ctx->pc = 0x2D3BE8u;
    // 0x2d3be8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d3bec:
    // 0x2d3bec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d3becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d3bf0:
    // 0x2d3bf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d3bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3bf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d3bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3c00: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3C00u;
            // 0x2d3c04: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3C08u;
}
