#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchGroupName__15mgCTextureAnimeFPc
// Address: 0x13d320 - 0x13d3c8
void SearchGroupName__15mgCTextureAnimeFPc_0x13d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchGroupName__15mgCTextureAnimeFPc_0x13d320");
#endif

    switch (ctx->pc) {
        case 0x13d35cu: goto label_13d35c;
        case 0x13d37cu: goto label_13d37c;
        default: break;
    }

    ctx->pc = 0x13d320u;

    // 0x13d320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13d324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13d328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d334: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13d334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d338: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13d338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d33c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D33Cu;
    {
        const bool branch_taken_0x13d33c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d33c) {
            ctx->pc = 0x13D350u;
            goto label_13d350;
        }
    }
    ctx->pc = 0x13D344u;
    // 0x13d344: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d348: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13D348u;
    {
        const bool branch_taken_0x13d348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d348) {
            ctx->pc = 0x13D3ACu;
            goto label_13d3ac;
        }
    }
    ctx->pc = 0x13D350u;
label_13d350:
    // 0x13d350: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13d350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d354: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13D354u;
    {
        const bool branch_taken_0x13d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d354) {
            ctx->pc = 0x13D394u;
            goto label_13d394;
        }
    }
    ctx->pc = 0x13D35Cu;
label_13d35c:
    // 0x13d35c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13d360: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13d364: 0x8c440124  lw          $a0, 0x124($v0)
    ctx->pc = 0x13d364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x13d368: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13D368u;
    {
        const bool branch_taken_0x13d368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d368) {
            ctx->pc = 0x13D390u;
            goto label_13d390;
        }
    }
    ctx->pc = 0x13D370u;
    // 0x13d370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13d370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d374: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x13D374u;
    SET_GPR_U32(ctx, 31, 0x13D37Cu);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D37Cu; }
        if (ctx->pc != 0x13D37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D37Cu; }
        if (ctx->pc != 0x13D37Cu) { return; }
    }
    ctx->pc = 0x13D37Cu;
label_13d37c:
    // 0x13d37c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D37Cu;
    {
        const bool branch_taken_0x13d37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d37c) {
            ctx->pc = 0x13D390u;
            goto label_13d390;
        }
    }
    ctx->pc = 0x13D384u;
    // 0x13d384: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13d384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13D388u;
    {
        const bool branch_taken_0x13d388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d388) {
            ctx->pc = 0x13D3ACu;
            goto label_13d3ac;
        }
    }
    ctx->pc = 0x13D390u;
label_13d390:
    // 0x13d390: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13d390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13d394:
    // 0x13d394: 0x0  nop
    ctx->pc = 0x13d394u;
    // NOP
    // 0x13d398: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13d39c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13d39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13d3a0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x13D3A0u;
    {
        const bool branch_taken_0x13d3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d3a0) {
            ctx->pc = 0x13D35Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13d35c;
        }
    }
    ctx->pc = 0x13D3A8u;
    // 0x13d3a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13d3ac:
    // 0x13d3ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13d3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d3b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d3b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d3b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d3b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d3bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13d3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13d3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D3C8u;
}
